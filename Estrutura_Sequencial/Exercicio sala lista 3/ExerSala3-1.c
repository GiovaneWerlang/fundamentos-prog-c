/*1) Ler um número float. Separar a parte inteira e a parte decimal desse número. Apresentar
a parte decimal como um valor float e como um inteiro de três dígitos. Da parte inteira
separar o número representa unidade, dezena e centena e mostrar. Exemplo:Informado o valor 123.456
Mostrar:Parte inteira: 123
Parte decimal: 0.456
Parte decimal como inteiro de três dígitos: 456
Unidade: 1Dezena: 2Centena: 3*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float num, result;
    int resultInt;

    //entrada
    printf("Insira o numero com decimal: ");
    scanf("%f",&num);

    resultInt = num;
    result = num - resultInt;
    printf("Parte decimal: %.3f \nparte inteira: %d\n", result, resultInt);
    resultInt = result * 1000;
    printf("Parte decimal como inteiro de tres digitos: %d\n",resultInt);
    resultInt = num / 100;
    printf("Unidade: %d\n",resultInt);
    resultInt = ((int)num / 10)% 10;
    printf("Unidade: %d\n",resultInt);
    resultInt = ((int)num % 10);
    printf("Unidade: %d\n",resultInt);

    system("pause");
    return(0);
}
