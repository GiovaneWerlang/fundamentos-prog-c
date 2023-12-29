#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pauseLimpa.h"
#include "somaDigitos.h"
#include "contaDigitos.h"
#include "verificaMultDigito.h"
#include "contaQtdeDigitos.h"

int main(void)
{
    char repetir, opcao;
    int num1, num2, digito;
    int i, retorno ;

    do
    {
        system("cls");
        //
            printf("Cálculos de dígitos.\n");
            printf("A - Cálculo de permutação entre a e b.\n");
            printf("B - Verifica se b corresponde aos últimos dígitos de a.\n");
            printf("C - Verifica se o menor de dois números é segmento do outro.\n");
            printf("Digite a opção desejada: .\n");
            fflush(stdin);
            scanf("%c",&opcao);

                switch(opcao)
                {
                    case 'A':
                    case 'a':
                    {
                        do
                        {
                            printf("Informe o valor de a: ");
                            scanf("%d",&num1);
                        }while(num1<0);
                        do
                        {
                            printf("Informe o valor de b: ");
                            scanf("%d",&num2);
                        }while(num2<0);
                        for(i=num1;i>0;i=i/10)
                        {
                            digito = i%10;
                            printf("%d\n",digito);
                            if(digito>0)
                            {
                                retorno = contaQtdeDigito(digito,num2);


                                if(retorno==0)
                                {
                                    printf("%d não é permutação de %d.\n",num1,num2);
                                    i=0;
                                }
                            }
                        }
                        retorno = somaDigitos(num1);
                        i = somaDigitos(num2);
                        if(retorno==i)
                        {
                            printf("%d é permutação de %d.\n",num1, num2);
                        }

                        break;
                    }
                    case 'B':
                    case 'b':
                    {

                        break;
                    }
                    case 'C':
                    case 'c':
                    {

                        break;
                    }
                    default:
                    {
                        printf("Opção inválida, tente novamente.\n");
                        break;
                    }
                }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    naoFechar();
    return(0);
}
