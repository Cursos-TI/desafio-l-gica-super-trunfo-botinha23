#include <stdio.h>

int main() {

    printf("Desafio nível novato\n");

    char nome_cidade1[100];
    char nome_cidade2[100];
    char codigo_da_cidade1[10];
    char codigo_da_cidade2[10];
    float populacao1;
    float populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    printf("Entre com a cidade1: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Entre com a cidade2: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Entre com o codigo da cidade1: ");
    scanf("%s", codigo_da_cidade1);

    printf("Entre com o codigo da cidade2: ");
    scanf("%s", codigo_da_cidade2);

    printf("Entre com a populacao da cidade1: ");
    scanf("%f", &populacao1);

    printf("Entre com a populacao da cidade2: ");
    scanf("%f", &populacao2);

    printf("Entre com a área da cidade1: ");
    scanf("%f", &area1);

    printf("Entre com a área da cidade2: ");
    scanf("%f", &area2);

    printf("Entre com o PIB da cidade1: ");
    scanf("%f", &pib1);

    printf("Entre com o PIB da cidade2: ");
    scanf("%f", &pib2);

    printf("Entre com o número de pontos turísticos da cidade1: ");
    scanf("%d", &pontos_turisticos1);

    printf("Entre com o número de pontos turísticos da cidade2: ");
    scanf("%d", &pontos_turisticos2);

    if (populacao1 > populacao2) {
        printf("\nCidade com maior população:\n");
        printf("Cidade: %s - Código da cidade: %s\n", nome_cidade1, codigo_da_cidade1);
        printf("População: %.2f - Área: %.2f\n", populacao1, area1);
        printf("PIB: %.2f - Número de pontos turísticos: %d\n", pib1, pontos_turisticos1);
    } else {
        printf("\nCidade com maior população:\n");
        printf("Cidade: %s - Código da cidade: %s\n", nome_cidade2, codigo_da_cidade2);
        printf("População: %.2f - Área: %.2f\n", populacao2, area2);
        printf("PIB: %.2f - Número de pontos turísticos: %d\n", pib2, pontos_turisticos2);
    }

    return 0;
}
