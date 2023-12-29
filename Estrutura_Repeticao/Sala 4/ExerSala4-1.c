/*1) Uma árvore  A tem 1,50 metros e cresce 2 centímetros por ano, enquanto uma árvore
B tem 1,10 metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e
imprima quantos anos serão necessários para que B seja maior que A.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float A = 1.50;
    float B = 1.10;
    float crescA = 0.02, crescB = 0.03;
    float tamA = A, tamB = B;
    int anos;

    while(tamA>tamB)
    {
        tamA = tamA + crescA;
        tamB = tamB + crescB;
        anos++;
    }
    printf("Serão necessários %d anos para B ser maior que A.\n",anos);

    system("pause");
    return(0);
}
