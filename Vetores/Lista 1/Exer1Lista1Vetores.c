/*1) Ler dez números inteiros. Validar as entradas para que sejam informados valores positivos. E em listagens separadas:
a) mostrar os pares;
b) mostrar os divisíveis por 3 e por 5 e contar a quantidade deles e mostrar.
c) mostrar os valores menores que 10 e os maiores que 100.
d) mostrar os valores maiores que 10 e menores que 100.
e) mostrar os ímpares e a quantidade de ímpares. Fazer a proporção de ímpares em relação a quantidade total de números.
O programa permanecerá em execução até que seja escolhida a opção sair ou alguma equivalente.*/

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
                if(vetor[i]%2==0)//se o conteúdo do vetor no indice é par
                {
                    printf("%d\t",vetor[i]);
                }
            }

            printf("\nValores divísiveis por 3 e por 5\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]%3==0&& vetor[i]%5==0)//se o conteúdo do vetor no indice é par
                {
                    printf("%d\t",vetor[i]);
                    qtdeDiv3e5++;
                }
            }
            printf("\nMenores que 10 e maiores que 100\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]<=10||vetor[i]>=100)//se o conteúdo do vetor no indice é par
                {
                    printf("%d\t",vetor[i]);
                }
            }
            printf("\nMaiores que 10 e menores que 100\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]>=10&&vetor[i]<=100)//se o conteúdo do vetor no indice é par
                {
                    printf("%d\t",vetor[i]);
                }
            }
            printf("\nImpares\n");
            for(i=0;i<10;i++)//percorrer o vetor pelo indice
            {
                if(vetor[i]%2!=0)//se o conteúdo do vetor no indice é par
                {
                    printf("%d\t",vetor[i]);
                    qtdeImpares++;
                }
            }
            printf("\nHá %d impares e corresmpondem a %f%%\n",qtdeImpares,qtdeImpares*100/10.0);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');
    system("pause");
    return(0);
}
