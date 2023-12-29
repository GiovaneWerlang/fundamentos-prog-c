/*4) Ler um número ponto flutuante (float):
a) Se o número lido é menor que 100, separar a parte inteira e a parte decimal e mostrálas separadamente.
b) Se o número lido é maior ou igual a 100, obter o resto da divisão desse número por 3 e
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
