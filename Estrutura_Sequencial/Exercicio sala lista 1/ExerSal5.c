/*5) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e
mostrar (reutilizando variáveis):
a) A soma desses números;
a) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
e) O resto da divisão do primeiro pelo segundo.
O que é o resto da divisão? Por que o operador de resto somente pode ser utilizado com
operandos inteiros? */

#include <stdio.h>

int main(void)
{
    //variaveis
    int valor1, valor2;
    int operacao;
    float operacaofloat;
    //entrada
    printf("Insira o primeiro valor: ");
    scanf("%d",&valor1);
    printf("Insira o segundo valor: ");
    scanf("%d",&valor2);

    //processamento
    operacao = valor1 + valor2;
    printf("%d + %d: %d\n ",valor1, valor2, operacao);
    operacao = valor1 - valor2;
    printf("%d - %d: %d\n ",valor1, valor2, operacao);
    operacao = valor1 * valor2;
    printf("%d * %d: %d\n ",valor1, valor2, operacao);
    operacao = valor1 / valor2;
    printf("%d / %d: %d\n ",valor1, valor2, operacao);
    operacaofloat = (float)valor1 / valor2;
    printf("%d / %d: %.3f\n",valor1, valor2, operacao);
    operacao = valor1 % valor2;
    printf("%d %% %d: %d\n ",valor1, valor2, operacao);


}
