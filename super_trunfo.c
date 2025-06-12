
  #include <stdio.h>

typedef struct {
    char nome[50];
    char estado[50];
    unsigned long int codigo;
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

int main() {
    Carta carta1, carta2;

    // Entrada de dados para a Carta 1
    printf("Informe os dados da Carta 1:\n");
    printf("Nome: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código: ");
    scanf("%lu", &carta1.codigo);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados para a Carta 2
    printf("\nInforme os dados da Carta 2:\n");
    printf("Nome: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código: ");
    scanf("%lu", &carta2.codigo);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo dos dados da Carta 1
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.populacao > 0) ? carta1.pib / carta1.populacao : 0;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib +
                         carta1.pontos_turisticos + carta1.pib_per_capita +
                         (1.0 / carta1.densidade_populacional);

    // Cálculo dos dados da Carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.populacao > 0) ? carta2.pib / carta2.populacao : 0;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib +
                         carta2.pontos_turisticos + carta2.pib_per_capita +
                         (1.0 / carta2.densidade_populacional);

    // Comparação das cartas
   
    printf("\n");
    printf("\n");
    printf("Comparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta %d venceu (%d)\n", 
           (carta1.populacao > carta2.populacao) ? 1 : 2, 
           (carta1.populacao > carta2.populacao) ? 1 : 0);

    // Comparação de Área
    printf("Área: Carta %d venceu (%d)\n", 
           (carta1.area > carta2.area) ? 1 : 2, 
           (carta1.area > carta2.area) ? 1 : 0);

    // Comparação de PIB
    printf("PIB: Carta %d venceu (%d)\n", 
           (carta1.pib > carta2.pib) ? 1 : 2, 
           (carta1.pib > carta2.pib) ? 1 : 0);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2, 
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 0);

    // Comparação de Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 2, 
           (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 0);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 2, 
           (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 0);

    // Comparação de Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (carta1.super_poder > carta2.super_poder) ? 1 : 2, 
           (carta1.super_poder > carta2.super_poder) ? 1 : 0);

    return 0;
}