/*13) Implemente um algoritmo que lê  números informados pelo usuário. O algoritmo
deve parar quando informado  um número negativo. Para cada número lido, exceto o
número negativo que representa a saída, o algoritmo deve imprimir a quantidade de
dígitos do número informado. Desafio: elaborar o algoritmo para qualquer valor de entrada (inteiro válido).
Exemplo:876654 = 6 dígitos
154 = 3 dígitos
8 = 1 dígito
0 = 1 dígito (cuidado com esse caso especial)*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,numM, qtde;
    int cont;

    do
    {
        cont = 0;
        printf("Informe um número: ");
        scanf("%d",&num);
        if(num>0)
        {
            numM=num;
            do
            {
               numM = numM/10;
               cont++;
            }while(numM!=0);
            if(cont>1)
            {
                printf("%d = %d digitos\n",num,cont);
            }
            else
            {
                printf("%d = %d digito\n",num,cont);
            }

        }
        else if(num==0)
        {
            printf("0 = 1 dígito\n");
        }


    }while(num>=0);


    system("pause");
    return(0);
}

