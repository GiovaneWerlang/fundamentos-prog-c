//2) Escreva um algoritmo que leia o raio de um círculo e calcule a sua circunferência.

#include <stdio.h>

int main(void)
{

    //variaveis
    float raio, pi, circunferencia;
    pi = 3.1415;


        //entrada
    printf("Informe o raio: ");
    scanf("%f",&raio);

         //processamento
    circunferencia = 2 * pi * raio;

         //saida
    printf("A circunferencia e de: %f",circunferencia);
}
