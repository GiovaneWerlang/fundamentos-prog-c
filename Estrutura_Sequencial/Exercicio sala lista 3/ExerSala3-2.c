/*2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade
de prestações pagas e o valor de cada prestação (que é fixo). Escreva um algoritmo que
determine o valor total já pago pelo consorciado e o saldo devedor.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int prestacoes, prestacoesPagas;
    float valorPrestacao, result;

    //entrada
    printf("Informe o numero de prestacoes: ");
    scanf("%d",&prestacoes);
    printf("Informe quantas prestacoes foram pagas: ");
    scanf("%d",&prestacoesPagas);
    printf("Informe o valor de cada prestacao: ");
    scanf("%f",&valorPrestacao);

    result = prestacoesPagas * valorPrestacao;
    printf("O valor ja paga pelo consorciado e: R$ %f\n",result);
    result = (prestacoes - prestacoesPagas) * valorPrestacao;
    printf("O saldo devedor e: R$ %f\n",result);

    system("pause");
    return(0);
}
