/*13 Desafio) Obter o resto da divisão de dois valores informados pelo usuário, sem usar o operador de resto.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float num1, num2, resto;
    int restoI;

    //entrada
    printf("Informe o primeiro valor: ");
    scanf("%f",&num1);
    printf("Informe o segundo valor: ");
    scanf("%f",&num2);

    resto = (num1 /num2);
    restoI = resto;
    resto = resto - restoI;
    resto = num1 * resto;
    printf("O resto da divisao e: %.0f\n",resto);


    system("pause");
    return(0);
}
