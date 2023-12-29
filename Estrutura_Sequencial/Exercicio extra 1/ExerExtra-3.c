#include <stdio.h>>

int main(void)
{
    //variaveis
    int num1, num2, resultado;

    //entrada
    printf("Informa o primeiro numero: ");
    scanf("%d",&num1);
    printf("Informa o segundo numero: ");
    scanf("%d",&num2);

    //processamento
    resultado = num1 / num2;

    //saida
    printf("O resultado da divisao e: %d",resultado);
}
