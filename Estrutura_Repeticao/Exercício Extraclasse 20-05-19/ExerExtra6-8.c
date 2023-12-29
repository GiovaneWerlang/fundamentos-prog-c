/*8) Um n�mero �n� inteiro e positivo � perfeito se �n� for igual � soma de seus divisores positivos
diferentes de �n�. Construa um programa que verifica n�meros informados pelo usu�rio s�o
perfeitos. O programa � finalizado quando informado zero ou valor negativo como entrada
Ex: 6 � perfeito, pois 1+2+3 = 6. */

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
            printf("Que n�mero deseja testar se � perfeito: ");
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
                printf("%d � perfeito. \n",n);
            }
            else
            {
                printf("%d n�o � perfeito. \n",n);
            }
        }while(n>0);
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

