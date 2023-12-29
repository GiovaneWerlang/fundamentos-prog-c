/*8) Escreva um programa que leia valores até ser informado o valor zero,
que não deve ser considerado nos cálculos. Ao final mostrar a quantidade
de números digitados, a soma dos valores digitados e a média aritmética
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
    printf("Quantidade de números digitados: %d\n", qtde);
    printf("Soma dos números digitados: %d\n", soma);
    printf("Média dos números digitados: %.2f\n", media);

    system("pause");
    return(0);
}
