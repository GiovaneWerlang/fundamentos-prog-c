/*1) A f�rmula para c�lculo de combina��es simples de n elementos p a p �: n!/(p! * (n-p)!).
Utilizar a fun��o do fatorial para implementar a f�rmula.
Nessa f�rmula n significa o universo de elementos(a quantidade de d�gitos que podem ser utilizados para compor
os n�meros de telefone (10 que s�o os d�gitos de 0 a 9), a quantidade de n�meros da loteria a serem combinados,
60 no caso da mega-sena) e p o total de elementos combinados (9 d�gitos no caso de S�o Paulo,
por exemplo e 6 para osn�meros da mega-sena).
Observa��o: a fun��o dever� ser inclu�da com #include <arquivofuncao.h>*/

#include <stdio.h>
#include <stdlib.h>
#include "fatorial.h"
#include "pauseLimpa.h"
#include "arquivofuncao.h"

int main(void)
{
    char repetir, opcao,retornoM;
    int num1, num2, fio, combina;
    float hipo;

    do
    {
        system("cls");
        //
            printf("3 em 1.\n");
            printf("A - C�lculo de combina��es.\n");
            printf("B - C�lculo da hipotenusa.\n");
            printf("C - Verificar se dois n�meros s�o m�ltiplos.\n");
            printf("Digite a op��o desejada: ");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    do
                    {
                        printf("Informe o valor de n: ");//fatorial de 60 estoura o int
                        scanf("%d",&num1);
                    }while(num1<=0);
                    do
                    {
                        printf("Informe o valor de p: ");
                        scanf("%d",&num2);
                    }while(num2<=0);
                    combina = calcularFatorial(num1)/(calcularFatorial(num2) * calcularFatorial(num1-num2));
                    printf("Fatorial � : %d.",combina);
                    break;
                }
                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe o primeiro cateto do tri�ngulo ret�ngulo: ");
                        scanf("%d",&num1);
                    }while(num1<=0);
                    do
                    {
                        printf("Informe o segundo cateto do tri�ngulo ret�ngulo: ");
                        scanf("%d",&num2);
                    }while(num2<=0);
                    hipo = hipotenusa(num1,num2);
                    hipo = sqrt(hipo);
                    printf("A hipotenusa �: %.2f\n",hipo);
                    fio = hipo + num1 + num2;
                    printf("S�o necess�rios %d metros de fio.\n",fio);
                    break;
                }
                case 'C':
                case 'c':
                {
                    do
                    {
                        printf("Informe um valor: ");
                        scanf("%d",&num1);
                        if(num1>=0)
                        {
                            do
                            {
                            printf("Informe outro valor: ");
                            scanf("%d",&num2);
                            }while(num2==0);
                            retornoM = multiplos(num1,num2);
                            if(retornoM== 's')
                            {
                                printf("%d e %d s�o m�ltiplos.\n",num1, num2);
                            }
                            else
                            {
                                printf("%d e %d n�o s�o m�ltiplos.\n",num1, num2);
                            }
                        }
                    }while(num1>=0);

                    break;
                }
                default:
                {
                    printf("Op��o inv�lida, tente novamente.\n");
                }
            }
        printf("\nExecutar novamente (s/s para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
