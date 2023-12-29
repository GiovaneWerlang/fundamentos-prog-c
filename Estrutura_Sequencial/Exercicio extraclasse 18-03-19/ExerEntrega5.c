/*5) Escreva um algoritmo que leia o raio e a altura de um cilindro e calcule o volume
desse cilindro.*/

#include <stdio.h>

int main(void)
{
    //variveis
    float raio, altura, volume, area;

    //entrada
    printf("Insira o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Insira o altura do cilindro: ");
    scanf("%f", &altura);

    //processamento
    area = 3.1415 * (raio * raio);
    volume = area * altura;

    //saida
    printf("O volume do cilindo e de: %f",volume);
}
