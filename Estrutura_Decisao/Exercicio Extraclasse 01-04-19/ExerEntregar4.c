/*4) Ler um n�mero ponto flutuante (float):
a) Se o n�mero lido � menor que 100, separar a parte inteira e a parte decimal e mostr�las separadamente.
b) Se o n�mero lido � maior ou igual a 100, obter o resto da divis�o desse n�mero por 3 e
mostrar esse resto.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num, mem;

    printf("Informe um numero float: ");
    scanf("%f",&num);

    if (num<100)
    {
        mem = (int)num;
        printf("Parte inteira %.0f\n",num);
        num = (num - (int)mem)*100;
        printf("Parte decimal %.0f\n",num);
    }
    else // if (num>=100)
    {
        num = (int)num % 3;
        printf("Resto da divisao e %.0f\n",num);
    }



    system("pause");
    return(0);
}
