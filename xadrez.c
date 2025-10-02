//Criaçao do movimentos das peças de Xadrez!

#include <stdio.h>

int main () {

    int d = 1;
    int c = 0;  //Variável contadora para os loopings
    char direita [20] = "Direita";         //Variável para o movimento da Torre
    char esquerda [20] = "Esquerda";       //Variável para o movimento da Rainha
    char cima [20] = "Cima";             //Variável para o movimento do Cavalo

    printf("Movimento da Torre: \n");   //Movimento da Torre: 5x para a direita
    for (c = 0; c < 5; c++)
    {
        printf("%s \n", direita);
    }

    printf("\nAgora o movimento do Bispo: \n");  //Movimento do Bispo: 5x para a diagonal(direita,cima)
    for (c = 0; c < 5; c++)
    {
        for (d = 0; d < 1; d++)
        {
            printf("%s, ", direita);
        }
        printf("%s \n", cima);
        
    }

    printf("\nAgora o movimento da Rainha: \n");   //Movimento da Rainha: 8x para a esquerda
    for(c = 0; c < 8; c++)
    {
        printf("%s \n", esquerda);
    }

    c = 0;
    printf("\nAgora, faremos o movimento do Cavalo: \n"); //Movimento do Cavalo: 2x para baixo e 1x para a esquerda
        for (c = 0; c < 1; c++)
        {
            for (d = 0; d < 2; d++)
            {
                printf("%s, ", cima);
            }
            printf("%s \n", direita);
        }
    
}
