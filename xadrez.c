//Criaçao do movimentos das peças de Xadrez!

#include <stdio.h>

int main () {

    int d = 1;
    int c = 0;  //Variável contadora para os loopings
    char direita [20] = "Direita";         //Variável para o movimento da Torre
    char diagonal [20] = "Direita,cima";   //Variável para o movimento do Bispo
    char esquerda [20] = "Esquerda";       //Variável para o movimento da Rainha
    char baixo [20] = "Baixo";             //Variável para o movimento do Cavalo

    printf("Movimento da Torre: \n");   //Movimento da Torre: 5x para a direita
    while (c < 5) {
        printf("%s \n", direita);
        c++;
    }

    c = 0;
    printf("\nAgora o movimento do Bispo: \n");  //Movimento do Bispo: 5x para a diagonal(direita,cima)
    do {

        printf("%s \n", diagonal);
        c++;

    } while (c < 5);

    printf("\nAgora o movimento da Rainha: \n");   //Movimento da Rainha: 8x para a esquerda
    for(c = 0; c < 8; c++)
    {
        printf("%s \n", esquerda);
    }

    c = 0;
    printf("Agora, faremos o movimento do Cavalo: \n"); //Movimento do Cavalo: 2x para baixo e 1x para a esquerda
    do {
        for (c = 0; c < 2; c++)
        {
            printf("%s \n", baixo);
        }
        printf("%s \n", esquerda);
        d++;
    } while (d <= 1);
    
}
