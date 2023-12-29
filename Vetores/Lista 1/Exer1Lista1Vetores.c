/*1) Ler dez n�meros inteiros. Validar as entradas para que sejam informados valores positivos. E em listagens separadas:
a) mostrar os pares;
b) mostrar os divis�veis por 3 e por 5 e contar a quantidade deles e mostrar.
c) mostrar os valores menores que 10 e os maiores que 100.
d) mostrar os valores maiores que 10 e menores que 100.
e) mostrar os �mpares e a quantidade de �mpares. Fazer a propor��o de �mpares em rela��o a quantidade total de n�meros.
O programa permanecer� em execu��o at� que seja escolhida a op��o sair ou alguma equivalente.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    char repetir;
    int i;
    int vetor[10]; //dez valores, indice de 0 a 9
    int qtdeImpares = 0;
    int qtdeDiv3e5 = 0;

    do
    {
        system("cls");
        //
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                do
                {
                    printf("vetor[%d]: ",i);
                    scanf("%d",&vetor[i]);
                }while(vetor[i] < 0);
            }

            printf("\nPares\n");

            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]%2==0)//se o conte�do do vetor no indice � par
                {
                    printf("%d\t",vetor[i]);
                }
            }

            printf("\nValores div�siveis por 3 e por 5\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]%3==0&& vetor[i]%5==0)//se o conte�do do vetor no indice � par
                {
                    printf("%d\t",vetor[i]);
                    qtdeDiv3e5++;
                }
            }
            printf("\nMenores que 10 e maiores que 100\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]<=10||vetor[i]>=100)//se o conte�do do vetor no indice � par
                {
                    printf("%d\t",vetor[i]);
                }
            }
            printf("\nMaiores que 10 e menores que 100\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]>=10&&vetor[i]<=100)//se o conte�do do vetor no indice � par
                {
                    printf("%d\t",vetor[i]);
                }
            }
            printf("\nImpares\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]%2!=0)//se o conte�do do vetor no indice � par
                {
                    printf("%d\t",vetor[i]);
                    qtdeImpares++;
                }
            }
            printf("\nH� %d impares e corresmpondem a %f%%\n",qtdeImpares,qtdeImpares*100/10.0);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');
    system("pause");
    return(0);
}
