/*9) Ler dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma
que a variável A passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo
das variáveis antes e depois da troca. */

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
