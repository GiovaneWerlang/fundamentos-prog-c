/*1) Ler um n�mero positivo. Repetir a leitura at� que seja informado um n�mero que atende essa condi��o (validar a entrada).
Esse n�mero representa a quantidade de primos a serem mostrados. Fazer a M�dia dos n�meros primos mostrados.
Validar para que n�o  seja realizada divis�o por zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i, p;
    int qtde;
    int cont=0, soma=0;
    float media;

    do
    {
        printf("Informe um n�mero positivo: ");
        scanf("%d",&num);
    }while(num<0);

    for(i=1;i<=num;i++)
    {
        qtde=0;
        for(p=2;p<=i/2;p++)
        {
            if(i%p==0)
            {
                qtde++;
                p=i;
            }
        }
        if(qtde==0)
        {
            printf("%d\t",i);
            soma = soma + i;
            cont++;

        }
    }
    if(cont>0)
    {
        media = soma/cont;
        printf("\nMedia: %.2f\n",media);
    }
    system("pause");
    return(0);
}
