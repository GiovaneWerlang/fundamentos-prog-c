/*8) Apresentar os n�meros entre 100 e 200. Contar quantos s�o �mpares e n�o divis�veis
por 3 nesse intervalo. Fazer a m�dia dos valores pares e divis�veis por 5 do intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int soma;
    int cont;
    int contM;
    float media;
    soma = 0;
    cont = 0;
    contM = 0;
    media = 0;

    for(i=101;i<200;i++)
    {
        if(i%2!=0 && i%3!=0)
        {
            cont = cont + 1;
            printf("%d\t",i);
        }
        if(i%2==0 && i%5==0)
        {
            contM = contM + 1;
            soma = soma + i;
        }
    }
    media = (float)soma / contM;
    printf("\nA media dos valores e: %.2f\n",media);
    system("pause");
    return(0);
}
