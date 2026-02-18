#include <stdio.h>

int main() {

    // ==============================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ==============================

    // População agora é unsigned long int
    unsigned long int populacao1, populacao2;

    int pontosturisticos1, pontosturisticos2;

    char estado1[20], estado2[20];
    char estadonome1[20], estadonome2[20];
    char nomedacidade1[20], nomedacidade2[20];
    char codigo1[4], codigo2[4];

    double area1, area2;
    double pib1, pib2;

    double pibpercapita1, pibpercapita2;
    double densidade1, densidade2;

    float superpoder1, superpoder2;

    // ==============================
    // ENTRADA DE DADOS
    // ==============================

    // CARTA 1
    printf("CARTA 1\n");

    printf("Letra do estado: ");
    scanf("%s", estado1);

    printf("Nome do estado: ");
    scanf("%s", estadonome1);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("Codigo da cidade: ");
    scanf("%s", codigo1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Area (km2): ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("\n");

    // CARTA 2
    printf("CARTA 2\n");

    printf("Letra do estado: ");
    scanf("%s", estado2);

    printf("Nome do estado: ");
    scanf("%s", estadonome2);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade2);

    printf("Codigo da cidade: ");
    scanf("%s", codigo2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Area (km2): ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    // ==============================
    // CÁLCULOS
    // ==============================

    pibpercapita1 = pib1 / (double)populacao1;
    pibpercapita2 = pib2 / (double)populacao2;

    densidade1 = (double)populacao1 / area1;
    densidade2 = (double)populacao2 / area2;

    // Inverso da densidade
    double inversodensidade1 = 1 / densidade1;
    double inversodensidade2 = 1 / densidade2;

    // Super Poder (atenção às conversões)
    superpoder1 = (float)(
        populacao1 +
        area1 +
        pib1 +
        pontosturisticos1 +
        pibpercapita1 +
        inversodensidade1
    );

    superpoder2 = (float)(
        populacao2 +
        area2 +
        pib2 +
        pontosturisticos2 +
        pibpercapita2 +
        inversodensidade2
    );

    // ==============================
    // COMPARAÇÕES
    // ==============================

    printf("\nComparacao de Cartas:\n\n");

    // População
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Área
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);

    // PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Pontos Turísticos
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);

    // Densidade (MENOR vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    // PIB per capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);

    // Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
