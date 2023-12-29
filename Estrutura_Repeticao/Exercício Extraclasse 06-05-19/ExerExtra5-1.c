/*1) Crie um algoritmo que o usuário informe com vários números inteiros e positivos e
imprima o produto dos números ímpares e a soma dos números pares. */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

int num, imp=1, par=0;

do{
    printf("Informe um número positivo (-1 para sair): ");
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
        printf("Número inválido.\n");
    }

}while(num!=-1);

printf("O produto dos ímpares é: %d\nA soma dos pares é: %d\n",imp,par);

system("pause");
return(0);
}
