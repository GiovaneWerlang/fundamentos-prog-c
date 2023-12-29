#include <stdio.h>

int main(void)
{
    //variaveis
    int num1,num2,resultado;

    //entrada
    printf("Insira o primeiro numero: ");
    scanf("%d",&num1);
    printf("Insira o segundo numero: ");
    scanf("%d",&num2);
    //processamento
    resultado = num1 - num2;

    //saida
    printf("O resultado da subtracao e: %d",resultado);
}

