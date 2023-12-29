#include <stdio.h>

int main(void)
{
    //variaveis
    int num1, num2, num3, resultado;

    //entrada
    printf("Informe o primeiro numero: ");
    scanf("%d",&num1);
    printf("Informe o segundo numero: ");
    scanf("%d",&num2);
    printf("Informe o terceiro numero: ");
    scanf("%d",&num3);

    //processamento
    resultado = num1 * num2 * num3;

    //saida
    printf("O resultado da multiplicacao e: %d",resultado);
}
