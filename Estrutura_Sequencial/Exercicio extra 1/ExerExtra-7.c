#include <stdio.h>

int main(void)
{
    //variaveis
    float peso, emagrecer, engordar;

    //entrada
    printf("Informe o peso: ");
    scanf("%f",&peso);

    //processamento
    emagrecer = (peso + (peso * ((float)15/100)));

    engordar = (peso - (peso * ((float)20/100)));

    //saida
    printf("O peso se engordar 15%% e de: %f",emagrecer);
    printf("O peso se emagrecer 20%% e de: %f",engordar);
}
