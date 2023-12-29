#include <stdio.h>

int main(void)
{
    //variaveis
    int angulo1, angulo2, angulo3;

    //entrada
    printf("Informe o primeiro angulo: ");
    scanf("%d",&angulo1);
    printf("Informe o segundo angulo: ");
    scanf("%d",&angulo2);

    //processamento
    angulo3 = 180 - (angulo1 + angulo2);

    //saida
    printf("O terceiro angulo do triangulo e de: %d",angulo3);

}
