/*5) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e
mostrar (reutilizando vari�veis):
a) A soma desses n�meros;
a) A subtra��o do primeiro pelo segundo;
c) A multiplica��o entre eles;
d) A divis�o inteira do primeiro pelo segundo;
e) A divis�o float do primeiro pelo segundo;
e) O resto da divis�o do primeiro pelo segundo.
O que � o resto da divis�o? Por que o operador de resto somente pode ser utilizado com
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
