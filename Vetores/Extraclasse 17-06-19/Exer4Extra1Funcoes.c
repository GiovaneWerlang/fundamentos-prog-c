#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir, opcao;
    float vetorV[100];
    int vetorQ[100];
    int i, tam, soma=0, qtde=0;
    float media=0, maximo, minimo, trocoF;
    int troco, ced100,ced50,ced20,ced10,ced5,ced2,moeda1,centavos;


    do
    {
        system("cls");
        //
        i=0;
        do
        {
            do
            {
                printf("Informe o valor do produto: ");
                scanf("%f",&vetorV[i]);
            }while(vetorV[i]==0);
            if(vetorV[i]>0)
            {
                do
                {
                    printf("Informe a quantidade: ");
                    scanf("%d",&vetorQ[i]);
                }while(vetorQ[i]<=0);
                i++;
            }
        }while(vetorV[i]>=0);
        tam = i;
        printf("\n%d\t",tam);

        printf("\nSupermercado v0.1b.\n");
        printf("A - Listar produtos.\n");
        printf("B - Média, Máximo e Mínimo.\n");
        printf("C - Troco.\n");
        printf("D - Listagem de produtos.\n");
        printf("E - Sair.\n");
        printf("Digite a opção desejada.\n");
        fflush(stdin);
        scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    printf("Valor Unitário\tQuantidade\tValor total.\n");
                    for(i=0;i<tam;i++)
                    {
                        printf("%.2f\t\t%d\t\t%.2f\n",vetorV[i],vetorQ[i],vetorV[i]*vetorQ[i]);
                    }
                    break;
                }
                case 'B':
                case 'b':
                {
                    char primeiro = 's';

                    for(i=0;i<tam;i++)
                    {
                        soma = soma + (vetorV[i] * vetorQ[i]);
                        qtde++;
                        if(primeiro =='s')
                        {
                            maximo = vetorV[i];
                            minimo = vetorV[i];
                            primeiro = 'n';
                        }
                        else
                        {
                            if(vetorV[i]>maximo)
                            {
                                maximo = vetorV[i];
                            }
                            else if(vetorV[i]<minimo)
                            {
                                minimo = vetorV[i];
                            }
                        }
                    }
                    if(qtde>0)
                    {
                        media = soma / (float)qtde;
                        printf("Média da compra: %.2f\n",media);
                    }
                    printf("Produto com maior valor: %.2f\n",maximo);
                    printf("Produto com menor valor: %.2f\n",minimo);
                    break;
                }
                case 'C':
                case 'c':
                {
                    maximo = 0;
                    for(i=0;i<tam;i++)
                    {
                        maximo = maximo + (vetorV[i]*vetorQ[i]);
                    }
                    printf("Valor da compra: %.2f\n", maximo);
                    do
                    {
                        printf("Informe o valor para pagamento:" );
                        scanf("%f", &minimo);
                    }while(minimo<maximo);
                    troco = minimo - maximo;
                    trocoF = minimo - maximo;
                    ced100=troco/100;
                    if(ced100>0)
                    {
                        printf("%d cédulas de 100\n",ced100);
                    }
                    ced50=troco%100/50;
                    if(ced50>0)
                    {
                        printf("%d cédulas de 50\n",ced50);
                    }
                    ced20=troco%100%50/20;
                    if(ced20>0)
                    {
                        printf("%d cédulas de 20\n",ced20);
                    }
                    ced10=troco%100%50%20/10;
                    if(ced10>0)
                    {
                        printf("%d cédulas de 10\n",ced10);
                    }
                    ced5=troco%100%50%20%10/5;
                    if(ced5>0)
                    {
                        printf("%d cédulas de 5\n",ced5);
                    }
                    ced2=troco%100%50%20%10%5/2;
                    if(ced2>0)
                    {
                        printf("%d cédulas de 2\n",ced2);
                    }
                    moeda1=troco%100%50%20%10%5%2;
                    if(moeda1>0)
                    {
                        printf("%d moedas de 1\n",moeda1);
                    }
                    centavos = (trocoF - troco) * 100;
                    if(centavos>0)
                    {
                        printf("%d centavos\n",centavos);
                    }

                    break;
                }
                case 'D':
                case 'd':
                {
                    printf("Valor Unitário\tQuantidade\tValor total.\n");
                    for(i=tam-1;i>=0;i--)
                    {
                        printf("%.2f\t\t%d\t\t%.2f\n",vetorV[i],vetorQ[i],vetorV[i]*vetorQ[i]);
                    }
                    break;
                }
                case 'E':
                case 'e':
                {
                    exit(0);
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

    system("pause");
    return(0);
}
