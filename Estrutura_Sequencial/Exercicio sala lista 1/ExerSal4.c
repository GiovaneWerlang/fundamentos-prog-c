/* 4) Um professor atribui pesos de 1, 3 e 5, respectivamente, para as notas de três
avaliações. Faça um algoritmo que calcule a média ponderada. A média será um valor
float e as notas valores inteiros. */

#include <stdio.h>

int main(void)
{
    //variaveis
    int nota1, nota2, nota3;
    float media;

    //entrada
    printf("Insira a primeira nota: ");
    scanf("%d",&nota1);
    printf("Insira a segunda nota: ");
    scanf("%d",&nota2);
    printf("Insira a terceira nota: ");
    scanf("%d",&nota3);

    //processamento
    media = ((nota1 * 1) + ((float)nota2 * 3) + (nota3 * 5))/ (1+3+5);

    //saida
    printf("A media ponderada é: %f",media);
}
