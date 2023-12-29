/*7) Elaborar um algoritmo para ler dois valores, verificar se o primeiro é múltiplo do segundo.
Escrever a mensagem ‘São múltiplos’ ou ‘Não são múltiplos’, dependendo da condição.
Verificar para que não seja realizada divisão por zero. Nesse caso, informar que não é possível realizar divisão por zero.*/

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
        printf("Não é possivel realizar a divisão por zero\n");
    }
    else
    {
        if(num1 % num2 ==0) //se o resto da divisao de num1 por num2 e zero
        {
            printf("%d é multiplo de %d\n",num1, num2);
        }
        else
        {
                printf("%d não é multiplo de %d\n",num1, num2);
        }
    }



    system("pause");
    return(0);
}
