/*4) Fazer um programa que leia um número de até três dígitos (considere que será fornecido
um número de até 3 dígitos), calcule e imprima a soma dos seus dígitos. Exemplo: 123 = 1+ 2 + 3 = 6.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int num, resultInt;
    float result1, result2, result3, result;

    //entrada
    printf("Informe um numero de ate 3 digitos: ");
    scanf("%d",&num);

    resultInt = num / 100;
    result1 = resultInt;
    resultInt = (num / 10)%10;
    result2 = resultInt;
    resultInt = num % 100 /10;
    result3 = resultInt;
    result = result1+ result2 + result3;
    printf("%.0f + %.0f + %.0f = %.0f\n",result1, result2, result3, result);

    system("pause");
    return(0);
}
