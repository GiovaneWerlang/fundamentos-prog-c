/*13) Implemente um algoritmo que l�  n�meros informados pelo usu�rio. O algoritmo
deve parar quando informado  um n�mero negativo. Para cada n�mero lido, exceto o
n�mero negativo que representa a sa�da, o algoritmo deve imprimir a quantidade de
d�gitos do n�mero informado. Desafio: elaborar o algoritmo para qualquer valor de entrada (inteiro v�lido).
Exemplo:876654 = 6 d�gitos
154 = 3 d�gitos
8 = 1 d�gito
0 = 1 d�gito (cuidado com esse caso especial)*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,numM, qtde;
    int cont;

    do
    {
        cont = 0;
        printf("Informe um n�mero: ");
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
            printf("0 = 1 d�gito\n");
        }


    }while(num>=0);


    system("pause");
    return(0);
}

