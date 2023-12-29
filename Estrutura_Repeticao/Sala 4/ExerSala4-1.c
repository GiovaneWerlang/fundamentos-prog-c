/*1) Uma �rvore  A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore
B tem 1,10 metros e cresce 3 cent�metros por ano. Construa um algoritmo que calcule e
imprima quantos anos ser�o necess�rios para que B seja maior que A.*/

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
    printf("Ser�o necess�rios %d anos para B ser maior que A.\n",anos);

    system("pause");
    return(0);
}
