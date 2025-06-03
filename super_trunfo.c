#include <stdio.h>


int main(){
    // Definição de Variáveis:
    char estado1, estado2, codigo1,codigo2;
    char nome1[20] ,nome2[20];
    int populacao1, populacao2, pontostur1, pontostur2;
    float area1, area2, pib1, pib2;

    //Pedindo dados ao usuário:
    printf("Cadastre os dados da Carta 1:\n");
    printf("Estado : \n");
    scanf("%s", &estado1);

    printf("Código da Cidade: \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s",&nome1);
   
    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em milhões): \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontostur1);

    printf("\nCadastre os dados da Carta 2:\n");
    printf("Estado : \n");
    scanf("%s", &estado2);

    printf("Código da Cidade: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s",&nome2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em milhões): \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontostur2);

    // Exibição dos Dados Cadastrados:
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostur1);
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostur2);

    return 0;
}



