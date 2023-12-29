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

    restoI = ((num1 /num2) * num2)- num2;
    //restoI = num1 - ((num1 * num2) * num2);

    printf("O resto da divisao e: %d\n",restoI);


    system("pause");
    return(0);
}
