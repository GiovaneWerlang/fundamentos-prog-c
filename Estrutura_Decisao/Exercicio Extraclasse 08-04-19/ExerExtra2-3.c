/*3) Ler um n�mero float. Se a parte decimal desse n�mero � maior ou igual a 0.5
arredond�-lo para o pr�ximo inteiro, caso contr�rio trunc�-lo. N�o � permitido utilizar
fun��es prontas.
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

    printf("Informe um n�mero float: ");
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

