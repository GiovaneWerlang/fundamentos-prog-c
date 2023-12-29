#include <stdio.h>

int main(void)
{
    //variaveis
    int lados, diagonais;

    //entrada
    printf("Informe a quantidade de lados: ");
    scanf("%d",&lados);

    //processamento
    diagonais = ( lados * ( lados - 3)) / 2;

    //saida
    printf("O numero de diagonais e de: %d",diagonais);
}
