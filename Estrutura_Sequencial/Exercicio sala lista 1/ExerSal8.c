/*8) Escreva um algoritmo que converta um valor temperatura de graus Fahrenheit para
graus Celsius, cuja fórmula de conversão é: (graus Fahrenheit - 32) * (5/9). Faça o teste
de mesa para 5 valores verificando se o algoritmo está correto. Primeiro calcule ou
procure ou calcule o valor de saída esperado. Use a seguinte tabela para o teste de mesa.
Entrada Saída esperada Saída obtida
0       |    -17,7778     |
32      |     0           |
50      |    10           |
-10     |    -23,3333     |
10,9    |    -11,722222   |                 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float celsius;
    float fahrenheit;

    //entrada
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f",&fahrenheit);

    //processamento
    celsius = (fahrenheit - 32.0) * (5 / 9.0); //necessario .0 ou (float) na divisao pra obter resultado diferente de 0

    //saida
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n",fahrenheit,celsius);

    system("pause");
    return(0);
}
