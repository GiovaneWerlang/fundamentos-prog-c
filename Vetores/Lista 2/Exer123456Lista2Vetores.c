#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int i, opcao;
    int tam;



    do
    {
        system("cls");
        //
            printf("Vetores.\n");
            printf("1 - Vetor 15 elementos, mostra pares e impares.\n");
            printf("2 - Vetor 8 elementos, mostra vetor A e outro vetor B com o dobro.\n");
            printf("3 - Vetor 7 elementos, mostra vetor A e outro vetor B \ncom o valor de A multiplicado pela posição.\n");
            printf("4 - Vetor 10 elementos, mostra vetor A e outro vetor B que é A em ordem inversa.\n");
            printf("5 - Vetor n elementos, mostra vetor A e B, e \nC será 1(se o elemento de A for maior que de B) ou 0(se menor).\n");
            printf("6 - Vetor 10 elementos, soma <100, quantidade == 100 e media>100.\n");
            printf("Informe a opção desejada: ");
            fflush(stdin);
            scanf("%d",&opcao);

                switch(opcao)
                {
                    case 1:
                    {
                    int vetor[15];
                    int qtdePares=0;
                    int qtdeImpares=0;
                    //void gerarVetorInt(int vetor[],int tam, int limite)
                    gerarVetorInt(vetor,15,30);
                    //void mostrarVetoresInt(int vetor[],int tam)
                    mostrarVetoresInt(vetor,15);
                    for(i=0;i<15;i++)//para saber tamanho exato do vetor de pares e impares
                    {
                        if(vetor[i] % 2==0)
                        {
                            qtdePares++;
                        }
                        else
                        {
                            qtdeImpares++;
                        }
                    }
                    int vetPares[qtdePares];
                    int vetImpares[qtdeImpares];

                    qtdeImpares=0;
                    qtdePares=0;
                    for(i=0;i<15;i++)
                    {
                        if(vetor[i]%2==0)
                        {
                            vetPares[qtdePares]= vetor[i];
                            qtdePares++;
                        }
                        else
                        {
                            vetImpares[qtdeImpares]=vetor[i];
                            qtdeImpares++;
                        }
                    }
                    //void mostrarVetoresInt(int vetor[],int tam)
                    printf("\n\nPares\n");
                    mostrarVetoresInt(vetPares,qtdePares);
                    printf("\n\nImpares\n");
                    mostrarVetoresInt(vetImpares,qtdeImpares);
                        break;
                    }
                    case 2:
                    {
                        int vetorA[8];
                        int vetorB[8];
                        gerarVetorInt(vetorA,8,20);
                        for(i=0;i<8;i++)
                        {
                            vetorB[i] = vetorA[i]*2;
                        }
                        printf("\n\nVetor A\n");
                        mostrarVetoresInt(vetorA,8);
                        printf("\n\nVetor B\n");
                        mostrarVetoresInt(vetorB,8);

                        break;
                    }
                    case 3:
                    {
                        int vetorA[7];
                        int vetorB[7];
                        gerarVetorInt(vetorA,7,20);
                        for(i=0;i<7;i++)
                        {
                            vetorB[i]= vetorA[i]*i;
                        }
                        printf("\n\nVetor A\n");
                        mostrarVetoresInt(vetorA,7);
                        printf("\n\nVetor B\n");
                        mostrarVetoresInt(vetorB,7);
                        break;
                    }
                    case 4:
                    {
                        int vetorA[10];
                        int vetorB[10];
                        int sum=9;
                        gerarVetorInt(vetorA,10,20);
                        for(i=0;i<10;i++)
                        {
                            vetorB[i+sum] = vetorA[i];
                            sum=sum-2;
                        }
                        printf("\n\nVetor A\n");
                        mostrarVetoresInt(vetorA,10);
                        printf("\n\nVetor B\n");
                        mostrarVetoresInt(vetorB,10);
                        break;
                    }
                    case 5:
                    {
                        do
                        {
                            printf("Informe o tamanho do vetor: ");
                            scanf("%d",&tam);
                        }while(tam<=0);

                        int vetorA[tam];
                        int vetorB[tam];
                        gerarVetorInt(vetorA,tam,50);
                        gerarVetorInt(vetorB,tam,50);
                        printf("\n\nVetor A\n");
                        mostrarVetoresInt(vetorA,tam);
                        printf("\n\nVetor B\n");
                        mostrarVetoresInt(vetorB,tam);
                        int vetorC[tam];
                        for(i=0;i<tam;i++)
                        {
                            if(vetorA[i]>vetorB[i])
                            {
                                vetorC[i] = 1;
                            }
                            else if(vetorA[i]==vetorB[i])
                            {
                                vetorC[i] = 0;
                            }
                            else
                            {
                                vetorC[i] = -1;
                            }
                        }
                        printf("\n\nVetor C\n");
                        mostrarVetoresInt(vetorC,tam);
                        break;
                    }
                    case 6:
                    {
                        int vetorA[10];
                        int soma =0;
                        int qtde = 0;
                        int cont=0;
                        float media=0;
                        gerarVetorInt(vetorA,10,200);
                        for(i=0;i<10;i++)
                        {
                            if(vetorA[i]<100)
                            {
                                soma = soma + vetorA[i];
                            }
                            else if(vetorA[i]==100)
                            {
                                qtde++;
                            }
                            else
                            {
                                cont = cont + vetorA[i];
                                media++;
                            }
                        }
                        printf("\n\nVetor A \n");
                        mostrarVetoresInt(vetorA,10);
                        printf("\nSoma dos elementos menores que 100 é %d\n",soma);
                        printf("\nQuantidade de elementos iguais a 100 é %d\n",qtde);
                        if(media>0)
                        {
                            media = soma/media;
                            printf("\nMedia dos elementos maiores que 100 é %.2f\n",media);
                        }
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
