#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"


int main(void)
{
    char repetir;
    int opcao;
    int maior;
    int vetM;

    do
    {
        system("cls");
        //
            printf("Vetores.\n");
            printf("1 - Ordena elementos de n.\n");
            printf("2 - Gera vetor com 11 elementos entre 10 e 20, mostra divisores e quantidade deles.\n");
            printf("3 - Gera vetor com 5 elementos entre 10 e 20,inclusive. Mostra sequencia de pares e sua soma.\n");
            printf("4 - Gera vetor com 100 elementos entre -50 e 50, coloca negativos em um vetor e positivos em outro.\n");
            printf("5 - Gera vetor com 100 elementos, gera outro vetor para conter os valores do primeiro divido pelo maior valor nele contido.\n");
            printf("6 - Gera vetor float, mostra e coloca os inteiros em um vetor, a parte decimal em um vetor e parte inteira em outro.\n");
            printf("7 - Locadora de vídeos, vetor 500 posições, clientes com mais de 10 locações tem locação gratis, outro vetor mostra isso.\n");
            printf("8 - Gera vetor com 100 caracteres, mostra 15 por linha.\n");
            printf("9 - Gera vetor 200 elementos alfanuméricos, motra com 12 por linha, conta letras, números e outros, armazena isso num vetor.\n");
            printf("Escolha a opcao desejada: ");
            scanf("%d",&opcao);

                switch(opcao)
                {
                    case 1:
                    {
                        int tam=30;
                        int vet[tam];
                        gerarVetorInt(vet,tam,80);
                        mostrarVetoresInt(vet,tam);
                        printf("\n\n");
                        ordenaVetor(vet,tam);
                        mostrarVetoresInt(vet,tam);
                        break;
                    }
                    case 2:
                    {
                        int tam=11;
                        //int vet[tam];
                        int i;
                        int retorno;
                        maior=0;
                        do
                        {
                            printf("Tamanho do vetor: ");
                            scanf("%d",&tam);
                        }while(tam<=0);
                        int vet[tam];
                        gerarVetorIntervalo(vet,tam,10,20);
                        ordenaVetor(vet,tam);

                            for(i=0;i<tam;i++)
                            {
                                mostraVet(vet,i);
                                mostraDivVet(vet,i);
                                qtdeDivVet(vet,i);
                                retorno = qtdeDivVet(vet,i);
                                printf("\n");
                                if(retorno>maior)
                                {
                                    maior = retorno;
                                    vetM = i;
                                }
                            }
                            printf("Maior quantidade de divisores é %d do número %d",maior,vet[vetM]);

                        break;
                    }
                    case 3:
                    {
                        int tam=5;
                        int vet[tam];
                        int i;
                        gerarVetorIntervalo(vet,tam,10,20);

                        for(i=0;i<tam;i++)
                        {
                            printf("%d ===> ",vet[i]);
                            mostraParesVet(vet,i);
                            somaVet(vet,i);
                        }

                        break;
                    }
                    case 4:
                    {
                        int tam=100;
                        int vet[tam];
                        int i,j=0,k=0;
                        int qtdeP=0;
                        int qtdeN=0;

                        gerarVetorIntervalo(vet,tam,-50,50);
                        mostrarVetoresInt(vet,tam);

                                    for(i=0;i<tam;i++)
                                    {
                                        if(vet[i]>0)
                                        {
                                            qtdeP++;
                                        }
                                    }
                                    int vetP[qtdeP];
                                    for(i=0;i<tam;i++)
                                    {
                                        if(vet[i]>0)
                                        {
                                            vetP[j] = vet[i];
                                            j++;
                                        }
                                    }


                        int vetC[tam];
                        for(i=0;i<tam;i++)
                        {
                            if(vet[i]>0)
                            {
                                vetC[k] = vet[i];
                                k++;
                            }
                        }
                        printf("\n\n");
                        mostrarVetoresInt(vetP,qtdeP);
                        printf("\n\n");
                        mostrarVetoresInt(vetC,tam);




                        break;
                    }
                    case 5:
                    {
                        int tam=100;
                        int vetA[tam];
                        int vetB[tam];
                        int i;
                        int copo=0;

                        gerarVetorInt(vetA,tam,100);

                        for(i=0;i<tam;i++)
                        {
                            if(vetA[i]>copo);
                            copo = vetA[i];
                        }
                        for(i=0;i<tam;i++)
                        {
                            vetB[i]=vetA[i]/copo;
                        }
                        mostrarVetoresInt(vetA,tam);
                        printf("\n\n");
                        mostrarVetoresInt(vetB,tam);
                        break;
                    }
                    case 6:
                    {
                        /*char vet[21];
                        fflush(stdin);
                        scanf("%s",vet);
                        printf("%s",vet);*/
                        int tam=30;
                        float vetF[tam];
                        float vetF2[tam];
                        float vetF3[tam];
                        float vetF4[tam];
                        int i=0,j=0,k=0,l=0;
                        int inteira;

                        gerarVetorFloat(vetF,tam,80.2);
                        mostrarVetoresFloat(vetF,tam);

                        for(i=0;i<tam;i++)
                        {
                            inteira = vetF[i];
                            if(vetF[i]-inteira==0)
                            {
                                vetF2[j] = vetF[i];
                                j++;
                            }
                            else
                            {
                                vetF3[k] =  inteira;
                                k++;

                                vetF4[l] = vetF[i]-inteira;
                                l++;
                            }
                        }
                        printf("\n\n");
                        mostrarVetoresFloat(vetF2, j);
                        printf("\n\n");
                        mostrarVetoresFloat(vetF3, k);
                        printf("\n\n");
                        mostrarVetoresFloat(vetF4, l);
                        break;
                    }
                    case 7:
                    {
                        int tam=500;
                        int vet[tam];
                        int i;
                        int vetB[tam];
                        gerarVetorInt(vet,tam,20);
                        for(i=0;i<tam;i++)
                        {
                            if(vet[i]>10)
                            {
                                vetB[i] = vet[i]/10;
                            }
                            else
                            {
                                vetB[i]=0;
                            }
                        }
                        mostrarVetoresInt(vet,tam);
                        printf("\n\n");
                        mostrarVetoresInt(vetB,tam);
                        break;
                    }
                    case 8:
                    {
                        int tam=101;
                        char vet[tam];
                        int i;
                        gerarVetorChar(vet,tam+1);
                        mostrarVetorChar(vet,tam+1);

                        break;
                    }
                    case 9:
                    {
                        int tam=200;
                        char vet[tam];
                        int vetC[3]={0};
                        int i;

                        gerarVetorAlfa(vet,tam);
                        mostrarVetorChar(vet,tam);

                        for(i=0;i<tam;i++)
                        {
                            if(vet[i]>64&&vet[i]<91||vet[i]>96&&vet[i]<123)
                            {
                                vetC[0]++;
                            }
                            else if(vet[i]>47&&vet[i]<58)
                            {
                                vetC[1]++;
                            }
                            else //if(vet[i]>31&&vet[i]<48||vet[i]>57&&vet[i]<65||vet[i]>90&&vet[i]<97||vet[i]>122)
                            {
                                vetC[2]++;
                            }

                        }
                        printf("\n\n");

                        printf("Número de letras: %d.\n",vetC[0]);
                        printf("Número de números: %d.\n",vetC[1]);
                        printf("Número de caracteres: %d.\n",vetC[2]);

                        break;
                    }
                    default:
                        {
                            printf("Opção inválida, tente novamente.\n");
                        }
                }

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
