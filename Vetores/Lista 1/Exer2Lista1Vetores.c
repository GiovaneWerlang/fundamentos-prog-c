/*2) Gerar um arquivo de cabe�alho com uma fun��o para gerar um vetor com n�meros aleat�rios,
com determinado tamanho e em uma determinada faixa de valores e com outra fun��o para mostrar
um vetor com tamanho n�o fixo.
Utilizar essas fun��es para gerar um vetor de valores rand�micos com a quantidade de elementos
informada pelo usu�rio. Validar a entrada para que seja informado um valor positivo para o tamanho do vetor.
Mostrar o vetor. Encontrar o menor entre os elementos gerados e armazenados no vetor e fazer a m�dia dos
pares que est�o no vetor. Validar para que n�o seja realizada divis�o por zero no c�lculo da m�dia.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir;
    int tam;
    int limite;
    int menor;
    int indice;
    int soma=0;
    int qtde=0;
    float media;

    do
    {
        system("cls");
        //
            do
            {
                printf("Informe o tamanho do vetor: ");
                scanf("%d",&tam);
            }while(tam <= 0);

            do
            {
                printf("Valor m�ximo armazenado no vetor: ");
                scanf("%d",&limite);
            }while(limite < 0);

            int vetor[tam];//declarar (cliar) o vetor

            //gerar dados para o vetor
            //void gerarVetorInt (int vetor[], int tam, int limite)
            gerarVetorInt(vetor,tam,limite);
            //void mostrarVetorInt(int vetor[], int tam)
            mostrarVetoresINt(vetor,tam);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
