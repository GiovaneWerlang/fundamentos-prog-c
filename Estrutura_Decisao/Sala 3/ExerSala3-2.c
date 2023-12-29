/*2) Ler dois números inteiros e informar:
a) Se ambos são divisíveis por 5.
b) Se pelo menos um deles é divisível por 5.
c) Se ambos são pares.
d) Se pelo menos um deles é ímpar.
Esses quatro itens podem ser realizados utilizando uma única estrutura if else ifencadeada? Por quê?*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d",&num1);
    printf("Informe o segundo número: ");
    scanf("%d",&num2);

    if(num1%5==0 && num2%5==0)
    {
        printf("Ambos são divisíveis por 5\n");
    }
    else if(num1%5==0 || num2%5==0)
    {
        printf("Ao menos um é divisível por 5\n");
    }
    else if(num1 % 2 ==0 && num2 % 2 == 0)
    {
        printf("Ambos os números são pares\n");
    }
    else if(num1 % 2 != 0 || num2 % 2 != 0)
    {
        printf("Ao menos um é ímpar\n");
    }
    system("pause");
    return(0);
}
