/*1) Ler um n�mero e apresentar o seu m�dulo (n�mero sem sinal), isto �, se informado
n�mero � negativo apresent�-lo como positivo. Otimize o c�digo: processe menos e use
menos mem�ria declarando o menor n�mero poss�vel de vari�veis.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Informe um numero: ");
    scanf("%d",&num);

    if(num ==0)
    {
        printf("0 n�o pode ser negativo\n");
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
