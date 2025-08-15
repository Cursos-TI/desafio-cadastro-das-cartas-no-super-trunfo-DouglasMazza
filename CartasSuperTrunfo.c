#include <stdio.h>
#include <string.h>

int main() {
    
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50]; 
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // variaveis para dar inicio ao calculo
    
    float densidade1, densidade2;
    float tipo1, tipo2;
    float superpoder1, superpoder2;

    int pontuacao1= 0; 
    int pontuacao2= 0;

    // Iniciando a programação
    
    printf("Cadastro da Carta 1:\n"); // Obtendo informação da primeira carta
    printf("Informe o estado (A,B,C,D,E,F,G ou H):");
    scanf("%s", estado1);
    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Obtendo informação da segunda carta

    printf("\nCadastro da Carta 2:\n"); 
    printf("Informe o estado (A,B,C,D,E,F,G ou H):");
    scanf("%s", estado2);
    printf("Digite o código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // iniciando os calculos 

    densidade1= (float)populacao1 / area1;
    tipo1= (pib1 * 1e9) / (float)populacao1; 
    
    densidade2= (float)populacao2 / area2;
    tipo2= (pib2 * 1e9) / (float)populacao2;

    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + tipo1 + ((densidade1 != 0.0f) ? 1.0f / densidade1 : 0.0f);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + tipo2 + ((densidade2 != 0.0f) ? 1.0f / densidade2 : 0.0f);

    // Resultado

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", tipo1);
    printf("Super poder: %.2f \n", superpoder1);


    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", tipo2);
    printf("Super poder: %.2f \n", superpoder2);

    // --- Comparações ---

    printf("\n--- Comparação de Cartas ---\n");

    if (populacao1 > populacao2) { printf("População: carta 1 vence (1)\n"); pontuacao1++; }
    else if (populacao2 > populacao1) { printf("População: Carta 2 vence (0)\n"); pontuacao2++; }

    if (area1 > area2) { printf("Área: Carta 1 vence (1)\n"); pontuacao1++; }
    else if (area2 > area1) { printf("Área: Carta 2 vence (0)\n"); pontuacao2++; }

    if (pib1 > pib2) { printf("PIB: Carta 1 vence (1)\n"); pontuacao1++; }
    else if (pib2 > pib1) { printf("PIB: Carta 2 vence (0)\n"); pontuacao2++; }

    if (pontos1 > pontos2) { printf("Pontos Turísticos: Carta 1 vence (1)\n"); pontuacao1++; }
    else if (pontos2 > pontos1) { printf("Pontos Turísticos: Carta 2 vence (0)\n"); pontuacao2++; }

    if (densidade1 < densidade2) { printf("Densidade Populacional: Carta 1 vence (1)\n"); pontos1++; }
    else if (densidade2 < densidade1) { printf("Densidade Populacional: Carta 2 vence (0)\n"); pontos2++; }

    if (pib1 > pib2) { printf("PIB per Capita: Carta 1 vence (1)\n"); pontuacao1++; }
    else if (pib2 > pib1) { printf("PIB per Capita: Carta 2 vence (0)\n"); pontuacao2++; }

    if (superpoder1 > superpoder2) { printf("Super Poder: Carta 1 vence (1)\n"); pontuacao1++; }
    else if (superpoder2 > superpoder1) { printf("Super Poder: Carta 2 vence (0)\n"); pontuacao2++; }
    
    // --- Resultado ---

    printf("\nResultado final: ");
    if (pontuacao1 > pontuacao2) {
        printf("Carta 1 venceu com %d atributos contra %d da Carta 2\n", pontuacao1, pontuacao2);
    } else if (pontuacao2 > pontuacao1) {
        printf("Carta 2 venceu com %d atributos contra %d da Carta 1\n", pontuacao2, pontuacao1);
    } 

    return 0;
}
