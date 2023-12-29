/*2) Ler dois n�meros inteiros e informar:
a) Se ambos s�o divis�veis por 5.
b) Se pelo menos um deles � divis�vel por 5.
c) Se ambos s�o pares.
d) Se pelo menos um deles � �mpar.
Esses quatro itens podem ser realizados utilizando uma �nica estrutura if else ifencadeada? Por qu�?*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2;

    printf("Informe o primeiro n�mero: ");
    scanf("%d",&num1);
    printf("Informe o segundo n�mero: ");
    scanf("%d",&num2);

    if(num1%5==0 && num2%5==0)
    {
        printf("Ambos s�o divis�veis por 5\n");
    }
    else if(num1%5==0 || num2%5==0)
    {
        printf("Ao menos um � divis�vel por 5\n");
    }
    else if(num1 % 2 ==0 && num2 % 2 == 0)
    {
        printf("Ambos os n�meros s�o pares\n");
    }
    else if(num1 % 2 != 0 || num2 % 2 != 0)
    {
        printf("Ao menos um � �mpar\n");
    }
    system("pause");
    return(0);
}
