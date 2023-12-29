#include <stdio.h>

int main(void)
{
    //variaveis
    float num1, num2, mediaPon;

    //entrada
    printf("Informe o primeiro numero: ");
    scanf("%f",&num1);
    printf("Informe o segundo numero: ");
    scanf("%f",&num2);

    //processamento
    mediaPon = (((float)2 * num1) + (3 * num2)) / (2+3);

    //saida
    printf("A media ponderada e: %f",mediaPon);
}
