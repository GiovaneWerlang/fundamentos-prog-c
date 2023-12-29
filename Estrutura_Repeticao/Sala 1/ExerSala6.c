/*6) Ler um número e imprimir todos os pares entre 2 e o número lido.
Imprimir a soma dos pares, o produto dos ímpares e divisíveis por 9 e a média
de todos os números do intervalo. Validar para que não seja realizada divisão por zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limite;
    int i;
    int somaPares=0;
    int produtoImpares=1;
    int soma=0;
    int qtde=0;
    float media;

    printf("Infome o valor do limte: ");
    scanf("%d",&limite);

    for(i=2;i<=limite;i++)
    {
        if(i%2==0)//se par
        {
            printf("%d\t",i);
            somaPares = somaPares+i; //2+4+6+8...
        }
        else //impar
        {
            if(i % 9==0)
                {
                    produtoImpares = produtoImpares * i;
                }
        }
        soma = soma +i;//acumular os valores
        qtde++; //contar quantos
    }//fim do for

    if(qtde >0) //se podemos calcular a média
    {
        media = (float)soma/qtde;
        printf("\nMédia do intervalo %.2f\n",media);
    }
    if(produtoImpares >1)
    {
        printf("Produto dos impares e divisiveis por 9: %d\n",produtoImpares);
    }
    if(somaPares > 0)
    {
        printf("Soma dos pares: %d\n",somaPares);
    }

    system("pause");
    return(0);
}
