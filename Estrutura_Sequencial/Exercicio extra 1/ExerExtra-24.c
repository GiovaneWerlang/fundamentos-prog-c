#include <stdio.h>

int main(void)
{
    //variaveis
    float dinheiro, conversaoDinheiro;

    //entrada
    printf("Informe a quantidade de dinheiro do viajante: ");
    scanf("%f",&dinheiro);

    //processamento
    conversaoDinheiro = dinheiro / 1.80;
    printf("A conversao para Dolar resulta em:$ %f\n",conversaoDinheiro);
    conversaoDinheiro = dinheiro / 2;
    printf("A conversao para Marco Alemao resulta em:DM %f\n", conversaoDinheiro);
    conversaoDinheiro = dinheiro / 1.57;
    printf("A conversao para Libra Esterlina resulta em:£ %f\n", conversaoDinheiro);
}
