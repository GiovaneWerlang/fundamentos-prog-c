#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir, opcao;
    float vetor1[5], vetor2[3];
    int vetor3[50];
    float maior, menor, soma, media=0;
    int posicao, qtde, i;

    do
    {
        system("cls");
        //
            printf("Vetores.\n");
            printf("A - Altura, maior e média.\n");
            printf("B - Notas, média.\n");
            printf("C - Vetor 50, pares e ímpares.\n");
            printf("Digite a opção desejada: ");
            fflush(stdin);
            scanf("%c",&opcao);

                switch(opcao)
                {
                        case 'A':
                        case 'a':
                        {
                            soma=0;
                            qtde=0;
                            for(i=0;i<5;i++)
                            {
                                do
                                {
                                    printf("Informe a altura da pessoa %d: ",i+1);
                                    scanf("%f",&vetor1[i]);
                                }while(vetor1[i]<=0);
                                if(vetor1[i]> maior)
                                {
                                    maior=vetor1[i];
                                    posicao=i;
                                }
                                if(vetor1[i]>1.50)
                                {
                                    soma = soma + vetor1[i];
                                    qtde++;
                                }
                            }
                            printf("Maior altura: %.2f e sua posicao: [%d]\n",maior,posicao+1);
                            if(qtde>0)
                            {
                                media = soma/(float)qtde;
                                printf("Media das alturas acima de 1.50: %.2f",media);
                            }


                            break;
                        }
                        case 'B':
                        case 'b':
                        {
                            float vetorA[3];
                            float vetorB[3];
                            maior=0;
                            menor=0;

                            for(i=0;i<3;i++)
                            {
                                do
                                {
                                    printf("Informe a primeira nota do aluno %d:",i+1);
                                    scanf("%f", &vetorA[i]);
                                }while(vetorA[i]<=0);
                                do
                                {
                                    printf("Informe a segunda nota do aluno %d:",i+1);
                                    scanf("%f", &vetorB[i]);
                                }while(vetorB[i]<=0);
                            }
                            for(i=0;i<3;i++)
                                {
                                    vetor2[i]= (vetorA[i]+vetorB[i])/2.0;
                                    if(vetor2[i]>=7.0)
                                    {
                                        maior++;
                                    }
                                    else
                                    {
                                        menor++;
                                    }
                                }
                                printf("%.0f alunos acima da média\n%.0f alunos abaixo da media.",maior,menor);
                            break;
                        }
                        case 'C':
                        case 'c':
                        {
                            posicao=0;
                            qtde=0;
                            gerarVetorInt(vetor3,50,100);
                            for(i=0;i<50;i++)
                            {
                                if(vetor3[i]%2==0)
                                {
                                    posicao++;
                                }
                                else
                                {
                                    qtde++;
                                }
                                printf("%d\t",vetor3[i]);
                            }
                            printf("\n");

                            int vetorP[posicao];
                            int vetorI[qtde];

                            posicao = 0;
                            qtde=0;
                            for(i=0;i<50;i++)
                            {
                                if(vetor3[i]%2==0)
                                {
                                    vetorP[posicao] = vetor3[i];
                                    posicao++;
                                }
                                else
                                {
                                    vetorI[qtde] = vetor3[i];
                                    qtde++;
                                }
                            }
                            for(i=0;i<posicao;i++)
                            {
                                printf("%d\t",vetorP[i]);
                            }
                            printf("\n\n");
                            for(i=0;i<qtde;i++)
                            {
                                printf("%d\t",vetorI[i]);
                            }

                            break;
                        }
                    default:
                        {

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

