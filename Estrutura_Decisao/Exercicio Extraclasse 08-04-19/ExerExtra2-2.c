/*2) Ler um n�mero float, se o mesmo possui parte decimal arredond�-lo para o pr�ximo
inteiro. N�o � permitido utilizar fun��es prontas.
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

    printf("Informe um n�mero: ");
    scanf("%f",&num);

    if((num - (int)num)==0) //se testar apenas a parte inteira sempre ser� igual a 0
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

