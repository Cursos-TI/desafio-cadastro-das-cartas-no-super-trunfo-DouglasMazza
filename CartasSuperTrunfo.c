#include <stdio.h>
#include <string.h> 

int main() {
    // Variáveis das cartas
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    int pontos_carta1 = 0, pontos_carta2 = 0;

    // --- Entrada da Carta 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o código (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // --- Entrada da Carta 2 ---
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código (ex: B02): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // --- Cálculos ---
    densidade1 = (area1 != 0.0f) ? ((float)populacao1 / area1) : 0.0f;
    densidade2 = (area2 != 0.0f) ? ((float)populacao2 / area2) : 0.0f;

    pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1e9f / (float)populacao1) : 0.0f;
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1e9f / (float)populacao2) : 0.0f;

    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + ((densidade1 != 0.0f) ? 1.0f / densidade1 : 0.0f);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + ((densidade2 != 0.0f) ? 1.0f / densidade2 : 0.0f);

    // --- Exibição dos Dados ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- Comparações ---
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: ");
    if (populacao1 > populacao2) {
        printf("1\n");
        pontos_carta1++;
    } else if (populacao2 > populacao1) {
        printf("0\n");
        pontos_carta2++;
    } else {
        printf("Empate\n");
    }

    printf("Área: ");
    if (area1 > area2) {
        printf("1\n");
        pontos_carta1++;
    } else if (area2 > area1) {
        printf("0\n");
        pontos_carta2++;
    } else {
        printf("Empate\n");
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("1\n");
        pontos_carta1++;
    } else if (pib2 > pib1) {
        printf("0\n");
        pontos_carta2++;
    } else {
        printf("Empate\n");
    }

    printf("Pontos Turísticos: ");
    if (pontos1 > pontos2) {
        printf("1\n");
        pontos_carta1++;
    } else if (pontos2 > pontos1) {
        printf("0\n");
        pontos_carta2++;
    } else {
        printf("Empate\n");
    }

    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("1\n");
        pontos_carta1++;
    } else if (densidade2 < densidade1) {
        printf("0\n");
        pontos_carta2++;
    } else {
        printf("Empate\n");
    }

    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("1\n");
        pontos_carta1++;
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("0\n");
        pontos_carta2++;
    } else {
        printf("Empate\n");
    }

    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("1\n");
        pontos_carta1++;
    } else if (superPoder2 > superPoder1) {
        printf("0\n");
        pontos_carta2++;
    } else {
        printf("Empate\n");
    }

    // --- Resultado final ---
    printf("\nResultado final: ");
    if (pontos_carta1 > pontos_carta2) {
        printf("Carta 1 venceu com %d atributos contra %d da Carta 2\n", pontos_carta1, pontos_carta2);
    } else if (pontos_carta2 > pontos_carta1) {
        printf("Carta 2 venceu com %d atributos contra %d da Carta 1\n", pontos_carta2, pontos_carta1);
    } else {
        printf("Empate com %d atributos para cada\n", pontos_carta1);
    }

    return 0;
}