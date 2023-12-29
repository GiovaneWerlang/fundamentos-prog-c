/*5) Elaborar uma função que verifica se um número é palíndromo. Um número é palíndromo ou
capicua quando ele não muda se lido da esquerda para a direita ou da direita para a esquerda. Por
exemplo, 2112 possui essa característica. Elaborar uma função que verifique se um número, que
contenha entre 2 e 4 dígitos, atende a essa característica.
Utilizando essa função:
a) Verificar se um número qualquer informado pelo usuário possui essa característica.
b) Apresentar os números entre 10 e 9999 que possuem essa característica.*/

#include <stdio.h>
#include <stdlib.h>
#include "pauseLimpa.h"
#include "diasVivo.h"
#include "verificaPerfeito.h"
#include "calculoPesoIdeal.h"
#include "verificaTriangulo.h"
#include "palindromo.h"

int main(void)
{
    char repetir, SN;
    int opcao, var1, var2, var3, retorno;
    float result, varf1;

    do
    {
        system("cls");
        //
            printf("Idade, Nº Perfeito, IMC, Tipo Triângulo, Palíndromo\n");
            printf("1 - Cálculo dias de vida.\n");
            printf("2 - Verificador de número perfeito.\n");
            printf("3 - Cálculo de peso ideal.\n");
            printf("4 - Identificador de tipo de triângulo.\n");
            printf("5 - Verificador de número palíndromo.\n");
            printf("Digite a opção desejada: ");
            fflush(stdin);
            scanf("%d",&opcao);

            switch(opcao)
            {
                case 1:
                {
                    do
                    {
                        printf("Informe a data de seu nascimento (formato dd/mm/yyyy): ");
                        scanf("%d/%d/%d",&var1, &var2, &var3);
                    }while(var1<=00||var2<=00||var3<=0000);

                    retorno = calculaDiasVida(var1,var2,var3);
                    printf("Você está vivo a %d dias.\n",retorno);
                    break;
                }
                case 2:
                {
                    do
                    {
                        printf("Informe o número que deseja verificar se é perfeito: ");
                        scanf("%d",&var1);
                    }while(var1<=0);


                    SN = verificaPerfeito(var1);

                    if(SN=='s')
                    {
                        printf("O número %d é perfeito.\n",var1);
                    }
                    else
                    {
                        printf("O número %d não é perfeito.\n",var1);
                    }
                    break;
                }
                case 3:
                {
                    printf("Informe sua altura (formato x.xx): ");
                    scanf("%f",&varf1);
                    printf("Informe seu genero (m/M - Masculino f/F - Feminino): ");
                    limparBuffer();
                    scanf("%c",&SN);
                    result = pesoIdeal(varf1, SN);
                    printf("Seu peso ideal é %.2f.\n",result);
                    break;
                }
                case 4:
                {
                    do
                    {
                        printf("Informe o comprimento do primeiro lado do triângulo: ");
                        scanf("%d",&var1);
                    }while(var1<=0);

                    do
                    {
                        printf("Informe o comprimento do segundo lado do triângulo: ");
                        scanf("%d",&var2);
                    }while(var1<=0);

                    do
                    {
                        printf("Informe o comprimento do terceiro lado do triângulo: ");
                        scanf("%d",&var3);
                    }while(var1<=0);

                    tipoTriangulo(var1,var2,var3);
                    break;
                }
                case 5:
                {
                    do
                    {
                        printf("Informe um número para verificar se é palindromo: ");
                        scanf("%d",&var1);
                    }while(var1<10||var1>9999);

                    palindromo(var1);

                    break;
                }
                default:
                {
                    printf("Opção inválida, tente novamente.\n");
                    break;
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
