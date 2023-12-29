/*10) Foi realizada uma pesquisa entre os habitantes de uma região e coletados os dados de altura e
trabalho (0=não trabalha, 1=trabalha) das pessoas. Faça um programa que leia os dados de x
pessoas e informe:
• a maior e a menor altura encontradas;
• a média de altura das pessoas que trabalham;
• a média de altura da população;
• o percentual das pessoas que não trabalham na população.
Dica: a saída (parar a entrada de dados) é definida quando o usuário informar um valor 0 ou
negativo para a altura. Quando isso ocorrer não ler os demais dados e apresentar as estatísticas
solicitadas. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir, primeira = 's';
    int trabalha;
    float altura, media=0, somaA=0, qtdeP=0, qtdeT=0, maiorA, menorA;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe altura: ");
            scanf("%f",&altura);
            if(altura>0)
            {
                do
                {
                    printf("Trabalha? (0=N/1=S)");
                    scanf("%d",&trabalha);
                }while(trabalha!=0&&trabalha!=1);

                if(primeira == 's')
                {
                    maiorA = altura;
                    menorA = altura;
                    primeira = 'n';
                }
                else
                {
                    if(altura>maiorA)
                    {
                        maiorA = altura;
                    }
                    if(altura<menorA)
                    {
                        menorA = altura;
                    }
                }
                somaA = somaA + altura;
                qtdeP++;

                if(trabalha==1)
                {
                    qtdeT++;
                }
            }
        }while(altura>0);

        printf("Maior altura: %.2f\nMenor altura: %.2f\n",maiorA,menorA);

        if(qtdeT>0)
        {
            media = somaA / (float)qtdeT;
            printf("Media da altura das pessoas que trabalham : %.2f\n",media);
        }

        if(qtdeP>0)
        {
            media = somaA / (float)qtdeP;
            printf("Media da altura da população: %.2f\n",media);
        }

        media = (qtdeT * 100.0)/qtdeP;
        printf("Percentual de pessoas que não trabalham: %.2f\n",media);
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
