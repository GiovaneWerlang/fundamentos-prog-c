/*1) Ler um número e apresentar o seu módulo (número sem sinal), isto é, se informado
número é negativo apresentá-lo como positivo. Otimize o código: processe menos e use
menos memória declarando o menor número possível de variáveis.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Informe um numero: ");
    scanf("%d",&num);

    if(num ==0)
    {
        printf("0 não pode ser negativo\n");
    }
    else if(num <0)
    {
        num = (-num + - num ) + num;
        printf("O modulo do numero e %d\n",num);
    }
    else
    {
        printf("%d ja e positivo\n",num);
    }

    system("pause");
    return(0);
}
