
  #include <stdio.h>

  int main(){
    char estado1, estado2,codigo1[4], codigo2[4], cidade1[50],  cidade2[50];
    int pontosTur1, pontosTur2, escolha;
    float area1, area2, pibPerc1, pibPerc2,densi1, densi2, pib1, pib2, CARTA_SUPER1, CARTA_SUPER2;
    unsigned long int populacao1, populacao2;
    
  
  
    //Inserindo dados na Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %s", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur1);
    //Inserindo dados na Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf("%s", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur2);
    //Calcular Densidade Populacional das cartas
    densi1 = area1 / populacao1 ;
    densi2 = area2 / populacao2 ;
    //Calcular PIB por habitante das cartas
    pibPerc1 = pib1 / populacao1;
    pibPerc2 = pib2 / populacao2;
    //Criando Carta Super
    CARTA_SUPER1 = (pib1 * 1000000) + (pontosTur1) + (populacao1) + (area1);
    CARTA_SUPER2 = (pib2 * 1000000) + (pontosTur2) + (populacao2) + (area2);
    //Criando menu para escolha de ação
    printf("######---MENU INTERATIVO SUPER TRUNFO---######");
    printf("\n\n");
    printf("Escolha qual atributo servirá de comparação entre as cartas:\n");
    printf("\n");
    printf("1 - POPULAÇÃO\n");
    printf("2 - AREA\n");
    printf("3 - PIB\n");
    printf("4 - PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE POPULACIONAL\n");
    printf("6 - PIB PER CAPITA\n");
    printf("7 CARTA SUPER\n");
    //Lendo a escolha do usuário.
    scanf("%d" , &escolha);
    //Fazendo a comparação de acordo com a escolha do usuário.
switch (escolha){
    
case 1:
       if ( populacao1 > populacao2){
              printf("Carta 1 vence com %lu habitantes,contra %lu habitantes da carta 2", populacao1, populacao2);       
       }else{
              printf("Carta 2 vence com %lu habitantes,contra %lu habitantes da carta 1", populacao2, populacao1);
       }
       break;

case 2:
       if ( area1 > area2 ){
              printf("Carta 1 vence com %fKm²,contra %fKm² da carta 2", area1 > area2);       
       }else{
              printf("Carta 1 vence com %fKm²,contra %fKm² da carta 2", area2 > area1);
       }
       break;
case 3:
       if ( pib1 > pib2){
              printf("Carta 1 vence com R$ %.2f de Pib,contra R$%.2f de Pib da carta 2", pib1, pib2);       
       }else{
              printf("Carta 2 vence com R$ %.2f de Pib,contra R$%.2f de Pib da carta 1", pib2, pib1 ); 
       }
break;
case 4:
       if ( pontosTur1 > pontosTur2){
              printf("Carta 1 vence com %d Pontos,contra %d lugares de visitação da carta 2", pontosTur1, pontosTur2);       
       }else{
              printf("Carta 2 vence com %d Pontos,contra %d lugares de visitação da carta 1", pontosTur2, pontosTur1); 
       }
break;
case 5:
       if ( densi1 > densi2){
              printf("Carta 1 vence com %.2ff de densidade,contra %.2f de densidade da carta 2", densi1, densi2);       
       }else{
              printf("Carta 2 vence com %.2f de densidade,contra %.2f de densidade da carta 1", densi2, densi1); 
       }
break;
case 6:
       if ( populacao1 > populacao2){
              printf("Carta 1 vence com %d habitantes,contra %d habitantes da carta 2", populacao1, populacao2);       
       }else{
              printf("Carta 2 vence com %d habitantes,contra %d habitantes da carta 1", populacao2, populacao1);
              
       }
       break;
case 7:
       if (CARTA_SUPER1 > CARTA_SUPER2){
              printf("Carta Super 1 vence com %fpontos,contra%fpontos da Carta Super 2",CARTA_SUPER1,CARTA_SUPER2);
       }else{
              printf("Carta Super 2 vence com %fpontos,contra%fpontos da Carta Super 1",CARTA_SUPER2,CARTA_SUPER1);
       }
       break;

default:
       printf("Opção inválida");
break;
    }

    return 0;
}
