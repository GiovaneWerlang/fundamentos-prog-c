/*3) Fazer uma função para calcular o fatorial de um número.
Fazer uma função para mostrar o processo de cálculo do fatorial.
A função será implementada em um arquivo de cabeçalho.
Fazer as opções com switch case e a variável passada como parâmetro do switch deve ser char.
E fazer uma função para realizar a funcionalidade de system(“pause”) e outra para limpar o buffer
a) Usar a primeira função para calcular a média do fatorial dos números entre 1 e 8.
b) Usar a primeira função para mostrar o fatorial de um valor informado pelo usuário.
Continuar a leitura enquanto informados valores positivos.
c) Usar essas duas funções para ler dois limites entre 1 e 14 e
mostrar da seguinte forma(para os limites 3 e 6)
3! = 3 * 2 * 1 = 6
4! = 4 * 3 * 2 * 1 = 24
5! = 5 * 4 * 3 * 2 * 1 = 120
6! = 6* 5 * 4 * 3 * 2 * 1 = 720*/

#include <stdio.h>
#include <stdlib.h>
#include "fatorial.h"
#include "pauseLimpa.h"

int main(void)
{
    char repetir, opcao;
    int retorno, i, num;
    int limiteInf, limiteSup, soma, qtde;
    float media;

    do
    {
        soma = 0;
        qtde = 0;
        system("cls");
        //
            printf("Calculadora de fatorial: \n");
            printf("A - Cálculo da média do fatorial entre 1 e 8.\n");
            printf("B - Cálculo do fatorial do número a ser informado.\n");
            printf("C - Cálculo dos fatoriais entre dois limites.\n");
            printf("Digite a opção desejada: ");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    //int calcularFatorial(int num)
                    for(i=1;i<=8;i++)
                    {
                        soma = soma + calcularFatorial(i);
                        qtde++;
                    }
                    media = soma / (float)qtde;
                    printf("\nMédia do fatorial entre 1 e 8: %.2f\n",media);
                    break;
                }
                case 'B':
                case 'b':
                {
                    //int calcularFatorial(int num)
                    do
                    {
                        printf("Informe o valor para cálculo fatorial(negativo para sair): ");
                        scanf("%d",&num);
                        if(num>0) //para desconsiderar o valor que é a saída//para não processar o valor que é a saída
                        {
                            retorno = calcularFatorial(num);
                            printf("O fatorial de %d é %d\n",num,retorno);
                        }
                    }while(num>0);

                    break;
                }
                case 'C':
                case 'c':
                {
                    do
                    {
                        printf("Informe um número (entre 1 e 14): ");
                        scanf("%d",&limiteInf);
                    }while(limiteInf < 1 || limiteInf > 14);
                    do
                    {
                        printf("Informe outro número (entre 1 e 14): ");
                        scanf("%d",&limiteSup);
                    }while(limiteInf < 1 || limiteInf > 14);

                    if(limiteSup<limiteInf)
                    {
                        i = limiteInf;
                        limiteInf = limiteSup;
                        limiteSup = i;
                    }
                    for(i=limiteInf;i<=limiteSup;i++)
                    {
                        printf("%d! = ",i);
                        mostraFatorial(i);
                        retorno = calcularFatorial(i);
                        printf(" = %d\n",retorno);
                    }
                    break;
                }
                default:
                {
                    printf("Opção inválida, tente novamente.\n");
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
