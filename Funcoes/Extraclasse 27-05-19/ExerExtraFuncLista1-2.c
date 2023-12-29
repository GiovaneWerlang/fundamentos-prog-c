/*2) Fazer uma função que converte de centímetros para polegadas. Usar essa função para:
a) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20.
b) Mostrar o valor em polegadas de um determinado valor informado pelo usuário.*/

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
            printf("Conversor de centímetros para polegadas: \n");
            printf("A - Imprimir tabela de conversão de cm para pol entre 1 e 20. \n");
            printf("B - Converter o valor informado pelo usuário para polegadas.\n");
            printf("Digite a opção desejada: ");
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
                        printf("Informe o valor em cm para conversão: ");
                        scanf("%d",&num1);
                    }while(num1<=0);
                    retorno = convert(num1);
                    printf("%d cm em pol é: %.2f",num1,retorno);
                    break;
                }
                default:
                {
                    printf("Opcão inválida, tente novamente. ");
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
