/*1) Fazer uma função para calcular o quadrado de um número. Usar essa função para (usar
obrigatoriamente a mesma função):
a) Mostrar o quadrado de um número informado pelo usuário.
b) Apresentar o quadrado dos números entre dois valores (limites de um intervalo) informados pelo
usuário na seguinte forma (no exemplo os limites são 5 e 8):
5 ^ 2 = 25
6 ^ 2 = 36
7 ^ 2 = 49
8 ^ 2 = 64
c) Implementar a fórmula. x e y são informados pelo usuário: x deve ser positivo e y maior que
zero. Validar as entradas:
valor = (x + y) * x^2 / y^2*/

#include <stdio.h>
#include <stdlib.h>
#include "quadrado.h"


int main(void)
{
    char repetir, opcao;
    int num1, x, y, limiteInf, limiteSup;
    int i, retorno, x2, y2;
    float valor;

    do
    {
        system("cls");
        //

            printf("Elevando números ao quadrado:\n");
            printf("A - Mostrar o quadrado de um número.\n");
            printf("B - Apresentar o quadrado entre dois valores.\n");
            printf("C - Calculo da fórmula.\n");
            printf("Digite a opção desejada: ");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    //int quadrado (int num1);
                    printf("Qual número deseja elevar ao quadrado? ");
                    scanf("%d",&num1);
                    retorno = quadrado(num1);
                    printf("O quadrado de %d é %d.",num1, retorno);
                    break;
                }

                case 'B':
                case 'b':
                {
                    //int quadrado (int num1);
                    do
                    {
                        printf("Informe o limite inferior: ");
                        scanf("%d",&limiteInf);
                    }while(limiteInf<=0);
                    do
                    {
                        printf("Informe o limite superior (maior que %d): ",limiteInf);
                        scanf("%d",&limiteSup);
                    }while(limiteSup<limiteInf);
                    for(i=limiteInf;i<=limiteSup;i++)
                    {
                        retorno = quadrado(i);
                        printf("%d ^ 2 = %d\n",i,retorno);
                    }
                    break;
                }

                case 'C':
                case 'c':
                {
                    //int quadrado (int num1);
                    do
                    {
                        printf("Informe o valor de x(valor positivo): ");
                        scanf("%d",&x);
                    }while(x<=0);
                    do
                    {
                        printf("Informe o valor de y(maior que 0): ");
                        scanf("%d",&y);
                    }while(y<=0);
                    x2 = quadrado(x);
                    y2 = quadrado(y);
                    valor = (x + y) * x2 / (float)y2;
                    printf("(%d + %d) * %d / %d = %.2f", x,y,x2,y2,valor);
                    break;
                }
                default:
                    {
                        printf("Opcão inválida. Tente novamente. ");
                        break;
                    }

            }

        printf("\nExecutar novamente (s/S para sim)?");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
