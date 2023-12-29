/*2) Fazer uma fun��o que converte de cent�metros para polegadas. Usar essa fun��o para:
a) Imprimir uma tabela de convers�o de cent�metros para polegadas entre 1 a 20.
b) Mostrar o valor em polegadas de um determinado valor informado pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include "CmToP.h"

int main(void)
{
    char repetir, opcao;
    int num1, i;
    float retorno;

    do
    {
        system("cls");
        //
            printf("Conversor de cent�metros para polegadas: \n");
            printf("A - Imprimir tabela de convers�o de cm para pol entre 1 e 20. \n");
            printf("B - Converter o valor informado pelo usu�rio para polegadas.\n");
            printf("Digite a op��o desejada: ");
            fflush(stdin);
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    for(i=1;i<=20;i++)
                    {
                        retorno = convert(i);
                        printf("%d cm\t%.2f pol\n",i,retorno);
                    }
                    break;
                }
                case 'B':
                case 'b':
                {
                    do
                    {
                        printf("Informe o valor em cm para convers�o: ");
                        scanf("%d",&num1);
                    }while(num1<=0);
                    retorno = convert(num1);
                    printf("%d cm em pol �: %.2f",num1,retorno);
                    break;
                }
                default:
                {
                    printf("Opc�o inv�lida, tente novamente. ");
                    break;
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');

    system("pause");
    return(0);
}
