/*2) Ler um número float, se o mesmo possui parte decimal arredondá-lo para o próximo
inteiro. Não é permitido utilizar funções prontas.
Por exemplo:
Informado: 5.005
Mostrar: 6
Informado: 5.00
Mostrar: 5*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num;

    printf("Informe um número: ");
    scanf("%f",&num);

    if((num - (int)num)==0) //se testar apenas a parte inteira sempre será igual a 0
    {
        printf("%.0f\n",num);
    }
    else
    {
        num= (num+0.99999);
        printf("%.0f\n",num);
    }



    system("pause");
    return(0);
}

