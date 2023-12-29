/*8)  Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes.
Cada nó interno da árvore corresponde a um teste do valor de uma das propriedades e os
ramos deste nó são identificados com os possíveis valores do teste. Cada nó folha da
árvore especifica o valor de retorno se a folha for atingida.
8.1) A Figura a seguir apresenta um exemplo fictício de árvore de decisão, tomando
atributos de clientes de alguma instituição financeira. Elabore o algoritmo que
implemente essa árvore de decisão. As entradas podem ser do tipo char, portanto,
considere a primeira letra de cada palavra como entrada.
            Saldo em conta corrente
    Positivo                Negativo
Cliente sem risco           Aplicações
                        Sim                     Não
                Cliente sem risco          Cliente com risco


*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char saldo, aplicacoes;

    printf("Informe se o saldo e positivo ou negativo: formato(P/N)");
    scanf("%c",&saldo);
    fflush(stdin);

    if(saldo=='P')
    {
        printf("Cliente sem risco");
    }
    else if(saldo =='N')
    {
        printf("Informe se o cliente tem aplicacoes: formato(S/N)");
        scanf("%c",&aplicacoes);
        fflush(stdin);
        if(aplicacoes =='S')
        {
            printf("Cliente sem risco\n");
        }
        else
        {
            printf("Cliente com risco\n");
        }
    }


    system("pause");
    return(0);
}
