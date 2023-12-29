/*2) Fazer uma função para verificar se um número é primo. A função será implementada
em um arquivo de cabeçalho. Fazer uma função para realizar a funcionalida
de de system(“pause”);
a) Usar essa função para verificar se um número informado pelo usuário é primo. Validar
a entrada para que o usuário informe um número positivo e maior que zero.
b) Usar essa função para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa função para fazer a média dos primos entre 200 e 100.*/

#include <stdio.h>
#include <stdlib.h>
#include "primos.h" //D:\pasta\pasta //até urls

int main(void)
{
    char repetir;
    int num;
    int i;
    int soma;
    int qtde;
    int retorno;
    float media;

    do
    {
        soma = 0;
        qtde = 0;
        system("cls");
        //
        printf("Informe um número para verificar se primo: ");
        scanf("%d",&num);
        //int verificaPrimo(int num)
        retorno = verificaPrimo(num);
        if(retorno==0)
        {
            printf("%d é primo\n",num);
        }
        else
        {
            printf("%d não é primo\n",num);
        }

        printf("\nPrimos entre 0 e 100\n");
        for(i=1;i<=100;i++)
        {
            //retorno = verificaPrimo(i);//if(retorno == 0)
            if(verificaPrimo(i) == 0)
            {
                printf("%d\t",i);
            }

        }

        for(i=200;i>=100;i--)
        {
            if(verificaPrimo(i) == 0)
            {
                soma = soma + i;
                qtde++;
            }
        }
        media = (float)soma/qtde;
        printf("\nMédia dos primos entre 100 e 200: %.2f",media);

        printf("\nExecutar novamente (s/S para sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
