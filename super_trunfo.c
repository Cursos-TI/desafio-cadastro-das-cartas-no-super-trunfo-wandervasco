#include <stdio.h>

// Definindo o tamanho máximo para as strings
#define Cod   3   
#define Cid   25

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[Cod];
    char nomeCidade1[Cid];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[Cod];
    char nomeCidade2[Cid];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta 1(ex: A01): ");
    scanf("%3s", codigo1);

    printf("Informe o Nome da Cidade da Cidade na Carta 1: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a População da Cidade na Carta 1: ");
    scanf("%d", &populacao1);

    printf("Informe a Área da Cidade na Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da Cidade na Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos da Cidade na Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta 2 (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Informe o Nome da Cidade na Carta 2: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População da Cidade na Carta 2: ");
    scanf("%d", &populacao2);

    printf("Informe a Área da Cidade na Carta 2(em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da Cidade na Carta 2(em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos da Cidade na Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}




