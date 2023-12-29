/*6) Ler um n�mero e imprimir todos os pares entre 2 e o n�mero lido.
Imprimir a soma dos pares, o produto dos �mpares e divis�veis por 9 e a m�dia
de todos os n�meros do intervalo. Validar para que n�o seja realizada divis�o por zero.*/

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

    if(qtde >0) //se podemos calcular a m�dia
    {
        media = (float)soma/qtde;
        printf("\nM�dia do intervalo %.2f\n",media);
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
