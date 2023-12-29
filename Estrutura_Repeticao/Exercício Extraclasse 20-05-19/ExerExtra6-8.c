/*8) Um número ‘n’ inteiro e positivo é perfeito se ‘n’ for igual à soma de seus divisores positivos
diferentes de ‘n’. Construa um programa que verifica números informados pelo usuário são
perfeitos. O programa é finalizado quando informado zero ou valor negativo como entrada
Ex: 6 é perfeito, pois 1+2+3 = 6. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, soma, i;

    do
    {
        system("cls");
        //
        do
        {
            printf("Que número deseja testar se é perfeito: ");
            scanf("%d",&n);
            soma = 0;
            for(i=1;i<n;i++)
            {
                if(n%i==0)
                {
                    soma = soma + i;
                }
            }
            if(soma == n)
            {
                printf("%d é perfeito. \n",n);
            }
            else
            {
                printf("%d não é perfeito. \n",n);
            }
        }while(n>0);
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

