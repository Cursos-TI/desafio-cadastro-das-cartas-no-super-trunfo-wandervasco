#include <stdio.h>

int main() {
    // Declarando variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTur1;
    float densi1;
    float pibPerc1;

    // Lendo os dados da primeira carta
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur1);

    // Calculando Densidade Populacional e PIB per Capita
    densi1 = populacao1 / area1;
    pibPerc1 = pib1  / populacao1; // PIB em reais

    // Declarando variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTur2;
    float densi2;
    float pibPerc2;

    // Lendo os dados da segunda carta
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur2);

    // Calculando Densidade Populacional e PIB per Capita para a segunda carta
    densi2 = populacao2 / area2;
    pibPerc2 = pib2 / populacao2; // PIB em reais

    // Exibindo os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densi1);
    printf("PIB per Capita: %.2f reais\n", pibPerc1);

    // Exibindo os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi2);
    printf("PIB per Capita: %.2f reais\n", pibPerc2);

    return 0;
}

  