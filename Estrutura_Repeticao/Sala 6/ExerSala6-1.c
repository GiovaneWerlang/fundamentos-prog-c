/*1) Ler um número positivo. Repetir a leitura até que seja informado um número que atende essa condição (validar a entrada).
Esse número representa a quantidade de primos a serem mostrados. Fazer a Média dos números primos mostrados.
Validar para que não  seja realizada divisão por zero.*/

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
        printf("Informe um número positivo: ");
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
