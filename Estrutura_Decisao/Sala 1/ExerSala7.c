/*7) Elaborar um algoritmo para ler dois valores, verificar se o primeiro � m�ltiplo do segundo.
Escrever a mensagem �S�o m�ltiplos� ou �N�o s�o m�ltiplos�, dependendo da condi��o.
Verificar para que n�o seja realizada divis�o por zero. Nesse caso, informar que n�o � poss�vel realizar divis�o por zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2;

    printf("Informe um numero: ");
    scanf("%d",&num1);
    printf("Informe outro numero: ");
    scanf("%d",&num2);

    if(num2 ==0)
    {
        printf("N�o � possivel realizar a divis�o por zero\n");
    }
    else
    {
        if(num1 % num2 ==0) //se o resto da divisao de num1 por num2 e zero
        {
            printf("%d � multiplo de %d\n",num1, num2);
        }
        else
        {
                printf("%d n�o � multiplo de %d\n",num1, num2);
        }
    }



    system("pause");
    return(0);
}
