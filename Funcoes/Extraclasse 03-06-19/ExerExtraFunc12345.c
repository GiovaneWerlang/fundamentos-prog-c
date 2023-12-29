/*5) Elaborar uma fun��o que verifica se um n�mero � pal�ndromo. Um n�mero � pal�ndromo ou
capicua quando ele n�o muda se lido da esquerda para a direita ou da direita para a esquerda. Por
exemplo, 2112 possui essa caracter�stica. Elaborar uma fun��o que verifique se um n�mero, que
contenha entre 2 e 4 d�gitos, atende a essa caracter�stica.
Utilizando essa fun��o:
a) Verificar se um n�mero qualquer informado pelo usu�rio possui essa caracter�stica.
b) Apresentar os n�meros entre 10 e 9999 que possuem essa caracter�stica.*/

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
            printf("Idade, N� Perfeito, IMC, Tipo Tri�ngulo, Pal�ndromo\n");
            printf("1 - C�lculo dias de vida.\n");
            printf("2 - Verificador de n�mero perfeito.\n");
            printf("3 - C�lculo de peso ideal.\n");
            printf("4 - Identificador de tipo de tri�ngulo.\n");
            printf("5 - Verificador de n�mero pal�ndromo.\n");
            printf("Digite a op��o desejada: ");
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
                    printf("Voc� est� vivo a %d dias.\n",retorno);
                    break;
                }
                case 2:
                {
                    do
                    {
                        printf("Informe o n�mero que deseja verificar se � perfeito: ");
                        scanf("%d",&var1);
                    }while(var1<=0);


                    SN = verificaPerfeito(var1);

                    if(SN=='s')
                    {
                        printf("O n�mero %d � perfeito.\n",var1);
                    }
                    else
                    {
                        printf("O n�mero %d n�o � perfeito.\n",var1);
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
                    printf("Seu peso ideal � %.2f.\n",result);
                    break;
                }
                case 4:
                {
                    do
                    {
                        printf("Informe o comprimento do primeiro lado do tri�ngulo: ");
                        scanf("%d",&var1);
                    }while(var1<=0);

                    do
                    {
                        printf("Informe o comprimento do segundo lado do tri�ngulo: ");
                        scanf("%d",&var2);
                    }while(var1<=0);

                    do
                    {
                        printf("Informe o comprimento do terceiro lado do tri�ngulo: ");
                        scanf("%d",&var3);
                    }while(var1<=0);

                    tipoTriangulo(var1,var2,var3);
                    break;
                }
                case 5:
                {
                    do
                    {
                        printf("Informe um n�mero para verificar se � palindromo: ");
                        scanf("%d",&var1);
                    }while(var1<10||var1>9999);

                    palindromo(var1);

                    break;
                }
                default:
                {
                    printf("Op��o inv�lida, tente novamente.\n");
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
