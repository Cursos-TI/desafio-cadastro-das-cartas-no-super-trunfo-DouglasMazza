#include <stdio.h>

    int main() {
     
        char carta1[10]= "A", carta2[10]= "B";
        char codigoS1[10]= "S01", codigoJ2[10]= "R01";
        char cidade1[50]= "SãoPaulo", cidade2[50]= "RiodeJaneiro";
        int numero1= 12325000, numero2= 6748000;
        float area1= 1521.11, area2= 1200.25;
        float dinheiro1= 699.28, dinheiro2= 300.50;
        int viagem1= 50, viagem2= 30;
 
        printf ("Cartas Super Trunfo \n");
       
        // Dando inicio a leitura das cartas
        
        printf("\n"); // informar para ir pra outra linha, para ficar organizado
        printf ("Carta 1: \n"); // Apresentando a carta 1
        printf ("Estado: %s \n", carta1);  
        printf ("Codigo: %s \n", codigoS1);
        printf ("Nome da cidade: %s \n", cidade1);
        printf ("População: %i \n", numero1);
        printf ("Área: %.2f km² \n", area1);
        printf ("PIB: %.2f bilhões de reais \n", dinheiro1);
        printf ("Número de Pontos Turísticos: %i \n", viagem1);
        
        printf ("\n"); // informar para ir pra outra linha, para ficar organizado
       
        printf ("Carta 2: \n"); //Apresentando a carta 2 
        printf ("Estado: %s \n", carta2);  
        printf ("Codigo: %s \n", codigoJ2);
        printf ("Nome da cidade: %s \n", cidade2);
        printf ("População: %i \n", numero2);
        printf ("Área: %.2f km² \n", area2);
        printf ("PIB: %.2f bilhões de reais \n", dinheiro2);
        printf ("Número de Pontos Turísticos: %i \n", viagem2);


        return 0;
}