/*2) Escreva um algoritmo que encontre o quinto n�mero maior que 1000, cuja divis�o por
11 tenha resto 5. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cont=0, num=1000, qMaior;

   do{
        if(num%11==5)
        {
            cont++;
            if(cont==5)
            {
                qMaior = num;
            }
        }
        num++;

   }while(cont<5);

   printf("O quinto n�mero maior que 1000 cuja divis�o por 11 tem resto 5 �: %d\n",qMaior);

    system("pause");
    return(0);
}
