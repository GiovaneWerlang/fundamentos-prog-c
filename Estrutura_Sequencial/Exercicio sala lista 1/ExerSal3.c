/*3) Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada
pelo atraso da presta��o. A taxa � informada em percentual. Calcule o valor a ser pago
por meio da f�rmula: Valor com juros = Presta��o + (Presta��o * Taxa /100). */

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
