#include <stdio.h>

int main() {
    
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // novas variaveis para dar inicio ao calculo
    
    float densidade1, densidade2;
    float tipo1, tipo2;

    // Iniciando a programação
    
    printf("Cadastro da Carta 1:\n"); // Obtendo informação da primeira carta
    printf("Informe o estado (A,B,C,D,E,F,G ou H):");
    scanf("%s", estado1);
    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
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
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // iniciando os calculos 
    densidade1= populacao1 / area1;
    tipo1= (pib1 * 1000000000) / populacao1; 
    
    densidade2= populacao2 / area2;
    tipo2= (pib2 * 1000000000) / populacao2;

    // Resultado

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", tipo1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", tipo2);

    return 0;
}
