/*7) Escreva um algoritmo que converta um valor de temperatura de graus Celsius para
graus Fahrenheit, cuja fórmula de conversão é: (9 * graus Celsius + 160) /5. Faça o teste
de mesa para 5 valores verificando se o algoritmo está correto. Primeiro calcule ou
procure o valor de saída esperado. Use a seguinte tabela para o teste de mesa.
Entrada Saída esperada Saída obtida
0       |     32          |     32
32      |     89.6        |     89.5999999
20      |     68          |     68
-10     |     14          |     14
-30     |    -22          |     14            */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float celsius;
    float fahrenheit;

    //entrada
    printf("Insira a temperatura em Celsius: ");
    scanf("%f",&celsius);

    //processamento
    fahrenheit= ((9 * celsius) +160)/(5);

    //saida
    printf("%.2f Graus Celsius correspondem a %.2f Graus Fahrenheit\n",celsius, fahrenheit);

    system("pause");
    return(0);
}
