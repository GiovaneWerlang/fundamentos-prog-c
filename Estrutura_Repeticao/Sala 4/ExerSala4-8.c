/*8) Escreva um programa que leia valores at� ser informado o valor zero,
que n�o deve ser considerado nos c�lculos. Ao final mostrar a quantidade
de n�meros digitados, a soma dos valores digitados e a m�dia aritm�tica
dos valores informados.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=1, qtde=0, soma=0;
    float media;

    while(num!=0)
    {
        printf("Informe um valor: ");
        scanf("%d",&num);
        if(num!=0)
        {
            qtde++;
            soma = soma + num;
        }
    }
    media = (float)soma / qtde;
    printf("Quantidade de n�meros digitados: %d\n", qtde);
    printf("Soma dos n�meros digitados: %d\n", soma);
    printf("M�dia dos n�meros digitados: %.2f\n", media);

    system("pause");
    return(0);
}
