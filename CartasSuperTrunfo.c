#include <stdio.h>

int main() {
   
    char estado1;
    char codigo1[4];  // ex: A01
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    printf("=== Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    printf("\n=== Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

   
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

 
    int venceuPopulacao = populacao1 > populacao2 ? 1 : 0;
    int venceuArea = area1 > area2 ? 1 : 0;
    int venceuPIB = pib1 > pib2 ? 1 : 0;
    int venceuPontos = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    int venceuDensidade = densidade1 < densidade2 ? 1 : 0;  
    int venceuPibPerCapita = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
    int venceuSuperPoder = superPoder1 > superPoder2 ? 1 : 0;

   
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", venceuPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", venceuArea);
    printf("PIB: Carta 1 venceu (%d)\n", venceuPIB);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", venceuPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceuDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceuPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceuSuperPoder);

    return 0;
}
