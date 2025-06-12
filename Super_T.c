#include <stdio.h>

typedef struct{
    
    // Criando a Estrutura Carta
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50],  cidade2[50];
    int populacao1, populacao2;
    float area1, area2 ;
    float pib1, pib2;
    int pontosTur1, pontosTur2;
    unsigned long int densi1, densi2;
    double pibPerc1, pibPerc2;
    unsigned long int Carta_SUPER1, Carta_SUPER2;
}Carta ;

void  CadastroDados_Cartas(){
// Lendo os dados da Carta 1
Carta Carta1,Carta2;
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %s", &Carta1.estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", Carta1.codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Carta1.cidade1);
    printf("População: ");
    scanf("%d", &Carta1.populacao1);
    printf("Área (km²): ");
    scanf("%f", &Carta1.area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &Carta1.pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &Carta1.pontosTur1);

    // Lendo os dados da segunda carta
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf("%s", &Carta2.estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", Carta2.codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Carta2.cidade2);
    printf("População: ");
    scanf("%d", &Carta2.populacao2);
    printf("Área (km²): ");
    scanf("%f", &Carta2.area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &Carta2.pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &Carta2.pontosTur2);
    
}
void CalcularDensidade(){
    // Função para calcular a densidade populacional
    Carta Carta1,Carta2;
    Carta1.densi1 = (Carta1.area1 * 1000 / Carta1.populacao1);
    Carta2.densi2 = (Carta2.area2 * 1000 /Carta2.populacao2);
}

void CalcularPib_PerCapita(){
    // Função para calcular o PIB per capita
    Carta Carta1,Carta2;
    Carta1.pibPerc1 = (Carta1.pib1 * 1000000000 / Carta1.populacao1);
    Carta2.pibPerc2 = (Carta2.pib2 * 1000000000 / Carta1.populacao2);
}
 
void Exibir(){
    // Exibindo os dados da primeira carta
   Carta Carta1,Carta2;
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Carta1.estado1);
    printf("Código: %s\n", Carta1.codigo1);
    printf("Nome da Cidade: %s\n", Carta1.cidade1);
    printf("População: %d\n", Carta1.populacao1);
    printf("Área: %f km²\n", Carta1.area1);
    printf("PIB: %.2f bilhões de reais\n", Carta1.pib1);
    printf("Número de Pontos Turísticos: %d\n", Carta1.pontosTur1);
    printf("Densidade Populacional: %ld hab/km²\n", Carta1.densi1);
    printf("PIB per Capita: R$%.2f \n", Carta1.pibPerc1);

    // Exibindo os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Carta2.estado2);
    printf("Código: %s\n", Carta2.codigo2);
    printf("Nome da Cidade: %s\n", Carta2.cidade2);
    printf("População: %d\n", Carta2.populacao2);
    printf("Área: %f km²\n", Carta2.area2);
    printf("PIB: %.2f bilhões de reais\n", Carta2.pib2);
    printf("Número de Pontos Turísticos: %d\n", Carta2.pontosTur2);
    printf("Densidade Populacional: %ld hab/km²\n",Carta2.densi2);
    printf("PIB per Capita: R$%.2f \n", Carta2.pibPerc2);

    }
void Carta_SuperPoderosa(){
    Carta Carta1, Carta2;
    Carta1.Carta_SUPER1 = (Carta1.populacao1 + Carta1.area1 + Carta1.pib1 + Carta1.pontosTur1 + Carta1.densi1 );
    Carta2.Carta_SUPER2 = (Carta2.populacao2 + Carta2.area2 + Carta2.pib2 + Carta2.pontosTur2 + Carta2.densi2 );

}

void Comparar_Cartas(){
    // Função para comparar as cartas
    Carta Carta1, Carta2;
    
    if(Carta1.populacao1 > Carta2.populacao2){
        printf("\nPopulação: A Carta 1 vence: %s com %d,tem mais população que %s, com %d habitantes.\n",Carta1.cidade1,Carta1.populacao1,Carta2.cidade2,Carta2.populacao2);
    }else{
        printf("\nPopulação: A Carta2 vence: %s com %d,tem mais população que %s, com %d habitantes.\n",Carta1.cidade2,Carta2.populacao2,Carta1.cidade1,Carta1.populacao1);
    }
    
    if(Carta1.area1 > Carta2.area2){
        printf("\nÁrea: A Carta 1 vence: %s com %fkm²,tem mais área que %s, com %fKm².\n",Carta1.cidade1,Carta1.area1,Carta2.cidade2,Carta2.area2);
    }else{
        printf("\nÁrea: A Carta2 vence: %s com %fKm²,tem mais área que %s, com %fKm².\n",Carta1.cidade2,Carta2.area2,Carta1.cidade1,Carta1.area1);
    }
    
    if (Carta1.pib1 > Carta2.pib2){
        printf("\nPIB: A Carta 1 vence: %s com R$ %.2f,tem mais Pib que %s, com R$ %.2f.\n",Carta1.cidade1,Carta1.pib1,Carta2.cidade2,Carta2.pib2);
    }else{
        printf("\nPIB: A Carta2 vence: %s com R$ %.2f,tem mais Pib que %s, com R$ %.2f.\n",Carta2.cidade2,Carta2.pib2,Carta1.cidade1,Carta1.pib1);
    }
    
    if (Carta1.pontosTur1 > Carta2.pontosTur2){
        printf("\nPontos Turísticos: A Carta 1 vence: %s com %d,tem mais Pontos Turísticos que %s, com %d Pontos Turísticos.\n",Carta1.cidade1,Carta1.pontosTur1,Carta2.cidade2,Carta2.pontosTur2);
    }else{
        printf("\nPontos Turísticos: A Carta2 vence: %s com %d,tem mais Pontos Turísticos que %s, com %d Pontos Turísticos.\n",Carta2.cidade2,Carta2.pontosTur2,Carta1.cidade1,Carta1.pontosTur1);
    }
       
    if(Carta1.densi1 < Carta2.densi2){
        printf("\nDensidade Populacional: A Carta 1 vence: %s com %ld de Densidade Populacional,tem mais que %s, com %ld de Densidade Populacional.\n",Carta1.cidade1,Carta1.densi1,Carta2.cidade2,Carta2.densi2);
    }else{
        printf("\nDensidade populacional: A Carta2 vence: %s com %ld de Densidade Populacional,tem mais que %s, com %ld de Densidade Populacional.\n",Carta2.cidade2,Carta2.densi2,Carta1.cidade1,Carta1.densi1);
    }

    if(Carta1.pibPerc1 > Carta2.pibPerc2){
        printf("\nPIB per Capita: A Carta 1 vence: %s com R$%.2f por habitante,tem mais PibPercapta que %s com R$%.2f por habitante.\n",Carta1.cidade1,Carta1.pibPerc1,Carta2.cidade2,Carta2.pibPerc2);
    }else{
        printf("\nPIB per Capita: A Carta2 vence: %s com R$%.2f por habitante,tem mais PibPercapta que %s com R$%.2f por habitante.\n",Carta2.cidade2,Carta2.pibPerc2,Carta1.cidade1,Carta1.pibPerc1);
    }

    if(Carta1.Carta_SUPER1 > Carta2.Carta_SUPER2){
        printf("\nCarta Super poder: A Carta 1 Venceu!!\n");
    }else{
        printf("\nCarta Super poder: A Carta 2 Venceu!!\n");
    }
}


int main(){
    CadastroDados_Cartas();
    CalcularDensidade();
    CalcularPib_PerCapita();
    Exibir();
    Carta_SuperPoderosa();
    Comparar_Cartas();

    return 0;
}
  