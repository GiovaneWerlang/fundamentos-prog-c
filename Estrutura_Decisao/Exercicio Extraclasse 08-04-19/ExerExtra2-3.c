/*3) Ler um número float. Se a parte decimal desse número é maior ou igual a 0.5
arredondá-lo para o próximo inteiro, caso contrário truncá-lo. Não é permitido utilizar
funções prontas.
Por exemplo:
Informado: 5.45
Mostrar: 5
Informado: 5.987
Mostrar: 6*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num;

    printf("Informe um número float: ");
    scanf("%f",&num);

    if(num != num+0.5)
    {
        printf("%.0f\n",num);
    }
    else
    {
        num = num +0.999999;
        printf("%.0f",num);
    }




    system("pause");
    return(0);
}

