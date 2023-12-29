/*7) Faça um programa que simule o caixa de um supermercado.
Ler o valor do produto e a quantidade. Parar a leitura quando informado
o valor zero ou negativo para o valor do produto.
O ser informado o valor negativo para o produto não ler a quantidade.
Ao final apresentar o valor final da compra.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valorP=1, valorF=0;
    int qtdeP;

    while(valorP>0)
    {
        printf("Informe o valor do produto: ");
        scanf("%f",&valorP);
        if(valorP>0)
        {
            printf("Informe a quantidade: ");
            scanf("%d",&qtdeP);
            valorF = valorF + (valorP * (float)qtdeP);
        }
    }

    printf("Valor final da compra: %.2f\n",valorF);

    system("pause");
    return(0);
}
