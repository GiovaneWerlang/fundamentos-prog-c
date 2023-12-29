/*10) Ler a quantidade e o respectivo valor de produtos. Parar a leitura quando informado valor
0 ou negativo para a quantidade. Ler o valor somente se informada quantidade válida. O valor
deve ser validado para que seja positivo.
Calcular o valor total da compra.
Calcular o valor médio dos itens comprados (fazer a média).
Do valor total da compra separar e mostrar reais e centavos.
Dos reais separar em cédulas de 100, 50, 20, 10, 5, 2 e moedas de 1.
Exemplo:
Informe a quantidade: 10
Informe o valor: 5.75
Informe a quantidade: 1
Informe o valor: 10
Informe a quantidade: 0
Total da compra: 67.50
São 67 reais e 50 centavos
São 6 cédulas de 10, 1 cédula de 5 e 1 cédula de 2 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int qtdeP, reais, centavos, cedula100, cedula50, cedula20, cedula10, cedula5, cedula2, moeda1, contC=0;
    float valorP, valorT=0, mediaV=0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe a quantidade do produto: ");
            scanf("%d",&qtdeP);
            if(qtdeP>0)
            {
                do
                {
                    printf("Informe o valor do produto: ");
                    scanf("%f",&valorP);
                }while(valorP<=0);
                valorT = valorT + (qtdeP * valorP);
                contC++;
            }
        }while(qtdeP>0);
        printf("Total da compra: %.2f\n",valorT);
        reais = valorT;
        centavos = (valorT - reais) * 100;
        printf("%d reais e %d centavos. \n",reais,centavos);
        cedula100 = valorT /100;
        cedula50 = (int)valorT%100/50;
        cedula20 = (int)valorT%100%50/20;
        cedula10 = (int)valorT%100%50%20/10;
        cedula5 = (int)valorT%100%50%20%10/5;
        cedula2 = (int)valorT%100%50%20%10%5/2;
        moeda1 = (int)valorT%100%50%20%10%5%2/1;
        if(cedula100>0)
        {
            printf("%d cédulas de 100\n",cedula100);
        }
        if(cedula50>0)
        {
            printf("%d cédulas de 50\n",cedula50);
        }
        if(cedula20>0)
        {
            printf("%d cédulas de 20\n",cedula20);
        }
        if(cedula10>0)
        {
            printf("%d cédulas de 10\n",cedula10);
        }
        if(cedula5>0)
        {
            printf("%d cédulas de 5\n",cedula5);
        }
        if(cedula2>0)
        {
            printf("%d cédulas de 2\n",cedula2);
        }
        if(moeda1>0)
        {
            printf("%d moedas de 1\n",moeda1);
        }
        if(contC>0)
        {
            mediaV = valorT/(float)contC;
            printf("Valor médio dos items comprados: %.2f\n",mediaV);
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
