/*8)  Uma �rvore de decis�o obt�m a decis�o pela execu��o de uma sequ�ncia de testes.
Cada n� interno da �rvore corresponde a um teste do valor de uma das propriedades e os
ramos deste n� s�o identificados com os poss�veis valores do teste. Cada n� folha da
�rvore especifica o valor de retorno se a folha for atingida.
8.1) A Figura a seguir apresenta um exemplo fict�cio de �rvore de decis�o, tomando
atributos de clientes de alguma institui��o financeira. Elabore o algoritmo que
implemente essa �rvore de decis�o. As entradas podem ser do tipo char, portanto,
considere a primeira letra de cada palavra como entrada.
            Saldo em conta corrente
    Positivo                Negativo
Cliente sem risco           Aplica��es
                        Sim                     N�o
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
