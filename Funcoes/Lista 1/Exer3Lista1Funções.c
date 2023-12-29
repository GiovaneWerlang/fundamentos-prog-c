/*3) Fazer uma fun��o para calcular o fatorial de um n�mero.
Fazer uma fun��o para mostrar o processo de c�lculo do fatorial.
A fun��o ser� implementada em um arquivo de cabe�alho.
Fazer as op��es com switch case e a vari�vel passada como par�metro do switch deve ser char.
E fazer uma fun��o para realizar a funcionalidade de system(�pause�) e outra para limpar o buffer
a) Usar a primeira fun��o para calcular a m�dia do fatorial dos n�meros entre 1 e 8.
b) Usar a primeira fun��o para mostrar o fatorial de um valor informado pelo usu�rio.
Continuar a leitura enquanto informados valores positivos.
c) Usar essas duas fun��es para ler dois limites entre 1 e 14 e
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
            printf("A - C�lculo da m�dia do fatorial entre 1 e 8.\n");
            printf("B - C�lculo do fatorial do n�mero a ser informado.\n");
            printf("C - C�lculo dos fatoriais entre dois limites.\n");
            printf("Digite a op��o desejada: ");
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
                    printf("\nM�dia do fatorial entre 1 e 8: %.2f\n",media);
                    break;
                }
                case 'B':
                case 'b':
                {
                    //int calcularFatorial(int num)
                    do
                    {
                        printf("Informe o valor para c�lculo fatorial(negativo para sair): ");
                        scanf("%d",&num);
                        if(num>0) //para desconsiderar o valor que � a sa�da//para n�o processar o valor que � a sa�da
                        {
                            retorno = calcularFatorial(num);
                            printf("O fatorial de %d � %d\n",num,retorno);
                        }
                    }while(num>0);

                    break;
                }
                case 'C':
                case 'c':
                {
                    do
                    {
                        printf("Informe um n�mero (entre 1 e 14): ");
                        scanf("%d",&limiteInf);
                    }while(limiteInf < 1 || limiteInf > 14);
                    do
                    {
                        printf("Informe outro n�mero (entre 1 e 14): ");
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
                    printf("Op��o inv�lida, tente novamente.\n");
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
