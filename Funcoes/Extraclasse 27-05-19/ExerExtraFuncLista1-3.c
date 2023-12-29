/*3) Fazer uma fun��o que converte de reais para d�lares ou de d�lares para reais. Essa fun��o recebe
como par�metros: o valor a ser convertido, o valor da cota��o, � se � para converter em d�lares ou
em reais. A fun��o faz a convers�o e retorna o valor convertido.
Sugest�o de cabe�alho da fun��o:
float ConverterMoedas( float Valor, float Cotacao, char Tipo) //Tipo 'D' ou 'd' significa que a
convers�o � de real para d�lar e 'R' ou 'r' significa que a convers�o � de d�lar para real.
Usando essa fun��o:
a) Ler um determinado valor, o valor da cota��o e o tipo de convers�o e apresentar o valor obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cota��o e o tipo de
convers�o e apresentar a tabela de convers�o resultante. Por exemplo:
D�lares Reais
10 20,00
11 22,00
12 24,00
13 26,00
C) Usar essa fun��o para c�lcular a seguinte f�rmula:
ValorReais = 12,34 + (3 * Valor1) / 45;
Sendo que Valor1 corresponde ao valor de 15 d�lares com uma cota��o de 2,055 reais por d�lar.*/

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
            printf("A - Realiza convers�o de moedas.\n");
            printf("B - Apresenta tabela de convers�o entre 2 limites.\n");
            printf("C - C�lculo da fun��o.\n");
            printf("Digite a op��o desejada.\n");
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
                        printf("Informe o valor da cota��o (valor positivo): ");
                        scanf("%f",&cotacao);
                    }while(cotacao<=0);
                    do
                    {
                        printf("Informe o tipo de convers�o (R/r - dolar para real, D/d - real para dolar): ");
                        fflush(stdin);
                        scanf("%c",&tipo);
                    }while(tipo!='R'&&tipo!='r'&&tipo!='d'&&tipo!='D');
                    retorno = converterMoedas(valor,cotacao,tipo);
                    if(tipo=='r'||tipo=='R')
                    {
                        printf("US$%.2f s�o R$%.2f\n",valor,retorno);
                    }
                    else
                    {
                        printf("R$%.2f s�o US$%.2f\n",valor,retorno);
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
                        printf("Informe o valor da cota��o (valor positivo): ");
                        scanf("%f",&cotacao);
                    }while(cotacao<=0);
                    do
                    {
                        printf("Informe o tipo de convers�o (R/r - dolar para real, D/d - real para dolar): ");
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
                        printf("Opc�o inv�lida. Tente novamente. ");
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
