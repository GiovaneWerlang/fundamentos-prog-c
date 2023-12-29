#include <stdio.h>

int main(void)
{
    //variaveis
    float peso,resultado;

    //entrada
    printf("Informe o peso: ");
    scanf("%f",&peso);

    //processamento
    resultado = (peso + (peso * ((float)15/100)));
    printf("O peso se engordar 15%% e de: %f",resultado);
    resultado = (peso - (peso * ((float)20/100)));
    printf("O peso se emagrecer 20%% e de: %f",resultado);
    //saida


}

