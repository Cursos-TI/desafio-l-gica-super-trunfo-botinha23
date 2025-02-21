#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Desafio nível novato\n");

    char país1[100], país2[100];
    char codigo_do_país1[10], codigo_do_país2[10];
    float populacao1, populacao2, area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    int opcao;

    printf("Entre com o nome do país 1: ");
    scanf("%s", país1);

    printf("Entre com o país 2: ");
    scanf("%s", país2);

    printf("Entre com o codigo do país1: ");
    scanf("%s",  codigo_do_país1 );

    printf("Entre com o codigo do país 2: ");
    scanf("%s", codigo_do_país2);

    printf("Entre com a populacao do país 1: ");
    scanf("%f", &populacao1);

    printf("Entre com a populacao do país 2: ");
    scanf("%f", &populacao2);

    printf("Entre com a área da país 1: ");
    scanf("%f", &area1);

    printf("Entre com a área do país 2: ");
    scanf("%f", &area2);

    printf("Entre com o PIB do país 1: ");
    scanf("%f", &pib1);

    printf("Entre com o PIB do país 2: ");
    scanf("%f", &pib2);

    printf("Entre com o número de pontos turísticos do país 1: ");
    scanf("%d", &pontos_turisticos1);

    printf("Entre com o número de pontos turísticos do país 2: ");
    scanf("%d", &pontos_turisticos2);


    do {
        printf("\nMenu de Opções:\n");
        printf("1 - Mostrar país com maior população\n");
        printf("2 - Mostrar país com maior PIB\n");
        printf("3 - Mostrar país com maior área\n");
        printf("4 - Mostrar país com mais pontos turísticos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("país com maior população: %s (%.2f habitantes)\n", país1, populacao1);
                } else {
                    printf("país com maior população: %s (%.2f habitantes)\n", país2, populacao2);
                }
                break;
            case 2:
                if (pib1 > pib2) {
                    printf("país com maior PIB: %s (%.2f)\n", país1, pib1);
                } else {
                    printf("país com maior PIB: %s (%.2f)\n", país2, pib2);
                }
                break;
            case 3:
                if (area1 > area2) {
                    printf("país com maior área: %s (%.2f km²)\n", país1, area1);
                } else {
                    printf("país com maior área: %s (%.2f km²)\n", país2, area2);
                }
                break;
            case 4:
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("país com mais pontos turísticos: %s (%d pontos)\n", país1, pontos_turisticos1);
                } else {
                    printf("país com mais pontos turísticos: %s (%d pontos)\n", país2, pontos_turisticos2);
                }
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
