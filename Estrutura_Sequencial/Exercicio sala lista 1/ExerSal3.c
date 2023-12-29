/*3) Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada
pelo atraso da prestação. A taxa é informada em percentual. Calcule o valor a ser pago
por meio da fórmula: Valor com juros = Prestação + (Prestação * Taxa /100). */

#include <stdio.h>

int main(void)
{

        //variaveis
    float prestacao, taxa, valor;

        //entrada
    printf("Informe o valor da prestacao: ");
    scanf("%f",&prestacao);
    printf("Informe o valor da taxa: ");
    scanf("%f",&taxa);

        //processamento

    valor = prestacao + (prestacao * (taxa/100));

        //saida
    printf("O valor com juros e: %f", valor);
}
