/*1) A fórmula para cálculo de combinações simples de n elementos p a p é: n!/(p! * (n-p)!).
Utilizar a função do fatorial para implementar a fórmula.
Nessa fórmula n significa o universo de elementos(a quantidade de dígitos que podem ser utilizados para compor
os números de telefone (10 que são os dígitos de 0 a 9), a quantidade de números da loteria a serem combinados,
60 no caso da mega-sena) e p o total de elementos combinados (9 dígitos no caso de São Paulo,
por exemplo e 6 para osnúmeros da mega-sena).
Observação: a função deverá ser incluída com #include <arquivofuncao.h>*/

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
            printf("A - Cálculo de combinações.\n");
            printf("B - Cálculo da hipotenusa.\n");
            printf("C - Verificar se dois números são múltiplos.\n");
            printf("Digite a opção desejada: ");
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
                    printf("Fatorial é : %d.",combina);
                    break;
                }
                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe o primeiro cateto do triângulo retângulo: ");
                        scanf("%d",&num1);
                    }while(num1<=0);
                    do
                    {
                        printf("Informe o segundo cateto do triângulo retângulo: ");
                        scanf("%d",&num2);
                    }while(num2<=0);
                    hipo = hipotenusa(num1,num2);
                    hipo = sqrt(hipo);
                    printf("A hipotenusa é: %.2f\n",hipo);
                    fio = hipo + num1 + num2;
                    printf("São necessários %d metros de fio.\n",fio);
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
                                printf("%d e %d são múltiplos.\n",num1, num2);
                            }
                            else
                            {
                                printf("%d e %d não são múltiplos.\n",num1, num2);
                            }
                        }
                    }while(num1>=0);

                    break;
                }
                default:
                {
                    printf("Opção inválida, tente novamente.\n");
                }
            }
        printf("\nExecutar novamente (s/s para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
