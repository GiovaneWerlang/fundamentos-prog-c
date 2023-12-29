/*2) Ler dois valores numéricos e apresentar a diferença entre eles. A diferença sempre é
positiva, portanto, o menor é subtraído do maior não importando a ordem em que os
números são informados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, diferenca;

    printf("Informe o primeiro número: ");
    scanf("%d",&num1);
    printf("Informe o segundo número: ");
    scanf("%d",&num2);

    if(num1>= num2)
    {
        diferenca = num1 -num2;
        printf("A diferenca entre %d e %d é: %d\n",num1, num2 ,diferenca); //mensagem igual poderia estar fora
    }
    else
    {
        diferenca = num2-num1;
        printf("A diferenca entre %d e %d é: %d\n",num1, num2 ,diferenca);
    }

    system("pause");
    return(0);
}
