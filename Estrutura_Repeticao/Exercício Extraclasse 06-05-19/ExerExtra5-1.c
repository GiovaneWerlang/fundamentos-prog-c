/*1) Crie um algoritmo que o usu�rio informe com v�rios n�meros inteiros e positivos e
imprima o produto dos n�meros �mpares e a soma dos n�meros pares. */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

int num, imp=1, par=0;

do{
    printf("Informe um n�mero positivo (-1 para sair): ");
    scanf("%d",&num);
    if(num>0)
    {
        if(num%2==0)
        {
            par = par + num;
        }
        else
        {
            imp = imp * num;
        }

    }
    else if(num<1&&num!=-1)
    {
        printf("N�mero inv�lido.\n");
    }

}while(num!=-1);

printf("O produto dos �mpares �: %d\nA soma dos pares �: %d\n",imp,par);

system("pause");
return(0);
}
