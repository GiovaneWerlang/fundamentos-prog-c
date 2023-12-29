/*3) Fazer uma função que converte de reais para dólares ou de dólares para reais. Essa função recebe
como parâmetros: o valor a ser convertido, o valor da cotação, é se é para converter em dólares ou
em reais. A função faz a conversão e retorna o valor convertido.
Sugestão de cabeçalho da função:
float ConverterMoedas( float Valor, float Cotacao, char Tipo) //Tipo 'D' ou 'd' significa que a
conversão é de real para dólar e 'R' ou 'r' significa que a conversão é de dólar para real.
Usando essa função:
a) Ler um determinado valor, o valor da cotação e o tipo de conversão e apresentar o valor obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cotação e o tipo de
conversão e apresentar a tabela de conversão resultante. Por exemplo:
Dólares Reais
10 20,00
11 22,00
12 24,00
13 26,00
C) Usar essa função para cálcular a seguinte fórmula:
ValorReais = 12,34 + (3 * Valor1) / 45;
Sendo que Valor1 corresponde ao valor de 15 dólares com uma cotação de 2,055 reais por dólar.*/

#include <stdio.h>
#include <stdlib.h>
#include "conversorMoedas.h"

int main(void)
{
    char repetir, opcao, tipo;
    float valor, cotacao, retorno,valorR;
    int i, limiteInf, limiteSup;

    do
    {
        system("cls");
        //
            printf("Conversor de moedas R$ para US$ ou US$ para R$.\n");
            printf("A - Realiza conversão de moedas.\n");
            printf("B - Apresenta tabela de conversão entre 2 limites.\n");
            printf("C - Cálculo da função.\n");
            printf("Digite a opção desejada.\n");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    do
                    {
                        printf("Informe o valor que deseja converter (valor positivo): ");
                        scanf("%f",&valor);
                    }while(valor<=0);
                    do
                    {
                        printf("Informe o valor da cotação (valor positivo): ");
                        scanf("%f",&cotacao);
                    }while(cotacao<=0);
                    do
                    {
                        printf("Informe o tipo de conversão (R/r - dolar para real, D/d - real para dolar): ");
                        fflush(stdin);
                        scanf("%c",&tipo);
                    }while(tipo!='R'&&tipo!='r'&&tipo!='d'&&tipo!='D');
                    retorno = converterMoedas(valor,cotacao,tipo);
                    if(tipo=='r'||tipo=='R')
                    {
                        printf("US$%.2f são R$%.2f\n",valor,retorno);
                    }
                    else
                    {
                        printf("R$%.2f são US$%.2f\n",valor,retorno);
                    }
                    break;
                }

                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe o limite inferior (valor positivo): ");
                        scanf("%d",&limiteInf);
                    }while(limiteInf<=0);
                    do
                    {
                        printf("Informe o limite superio (maior que %d): ",limiteInf);
                        scanf("%d",&limiteSup);
                    }while(limiteSup<limiteInf);
                    do
                    {
                        printf("Informe o valor da cotação (valor positivo): ");
                        scanf("%f",&cotacao);
                    }while(cotacao<=0);
                    do
                    {
                        printf("Informe o tipo de conversão (R/r - dolar para real, D/d - real para dolar): ");
                        fflush(stdin);
                        scanf("%c",&tipo);
                    }while(tipo!='R'&&tipo!='r'&&tipo!='d'&&tipo!='D');
                    if(tipo=='r'||tipo=='R')
                    {
                        printf("Dolares\tReais\n");
                    }
                    else
                    {
                        printf("Reais\tDolares\n");
                    }
                    for(i=limiteInf;i<=limiteSup;i++)
                    {
                        retorno = converterMoedas(i,cotacao,tipo);
                        printf("%d\t %.2f\n",i,retorno);

                    }
                    break;
                }

                case 'C':
                case 'c':
                {
                    retorno = converterMoedas(15,2.055,'r');
                    valorR = 12.34 + (3 * retorno) / 45;
                    printf("12,34 + (3 * %.2f) /45 = %.2f\n",retorno,valorR);
                    break;
                }
                default:
                    {
                        printf("Opcão inválida. Tente novamente. ");
                        break;
                    }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
