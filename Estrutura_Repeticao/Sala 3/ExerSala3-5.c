/*5) Mostrar os valores ímpares e não divisíveis por 5 entre 200 e 0.
Apresentar os valores em ordem decrescente. Fazer a média dos valores desse intervalo que são divisíveis por 3 e por 5.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int soma, cont;
    float media;
    soma = 0;
    cont = 0;
    media = 0;

    for(i=200;i>=0;i--)
    {
        if(i%3==0&&i%5==0)
        {
            printf("%d\t",i);
            soma = soma + i;
            cont = cont + 1;
        }
    }

    media = soma / cont;
    printf("\nA media do intervalo e: %.2f\n",media);
    system("pause");
    return(0);
}
