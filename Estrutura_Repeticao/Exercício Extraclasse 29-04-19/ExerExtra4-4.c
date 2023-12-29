/*4) Construa um algoritmo que, dado um conjunto de valores inteiros e positivos, determine
qual o menor e o maior valor positivos informados. Dos valores negativos calcular a média. O
final do conjunto de valores é conhecido através do valor -1, que não deve ser considerado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char primeiroN = 'n';
    int num, menor, maior, cont=0;
    float media=0;

    do{
        if(num!=-1)
        {
            printf("Informe um número (-1 para sair): ");
            scanf("%d",&num);
            if(primeiroN =='n')
            {
                menor = num;
                maior = num;
                primeiroN = 's';
            }
            else
            {
                if(num>maior)
                {
                    maior = num;
                }
                if(num>0&&num<menor)
                {
                    menor = num;
                }
                if(num<-1)
                {
                    media = media +num;
                    cont++;
                }
            }

        }

    }while(num!=-1);

    printf("%d é o menor e %d é o maior.\n",menor, maior);
    media = media/cont;
    printf("A média dos negativos é: %.2f\n",media);


    system("pause");
    return(0);
}
