/*4) Construa um algoritmo que, dado um conjunto de valores inteiros e positivos, determine
qual o menor e o maior valor do conjunto. O final do conjunto de valores é conhecido através
do valor -1, que não deve ser considerado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int menor=0, maior=0, num;
    char controle = 'n';

    while(num!=-1){
        printf("Informe um número: ");
        scanf("%d",&num);
        if(num!=-1)
            {
        if(controle == 'n')//� o primeiro valor sendo informado
            {
                maior = num;
                menor = num;
                controle = 's';
            }

        if(num>menor&&num>maior)
        {
            maior = num;
        }
        if(num<menor&&num<maior&&num!=-1)
        {
            menor = num;
        }
        }
    }
    printf("O valor menor e %d e o maior e %d\n",menor, maior);


    system("pause");
    return(0);
}
