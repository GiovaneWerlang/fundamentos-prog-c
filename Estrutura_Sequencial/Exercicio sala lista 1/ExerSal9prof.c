/*9) Ler dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma
que a vari�vel A passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do
das vari�veis antes e depois da troca. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int copoA, copoB, copoVazio;

    //entrada
    printf("Defina o valor inteiro de A: "); //nao seria necessario inserir valores
    scanf("%d",&copoA);
    printf("Defina o valor inteiro de B: ");
    scanf("%d",&copoB);

    //processamento
    printf("Antes da troca: \nCopo A: %d e Copo B: %d\n",copoA,copoB);
    copoVazio=copoA;
    copoA=copoB;
    copoB=copoVazio;

    //saida
    printf("Depois da troca \nCopo A: %d e Copo B: %d",copoA,copoB);
}
