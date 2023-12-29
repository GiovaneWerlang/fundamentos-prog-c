/*1) Ler dois números reais (ponto flutuante) e apresentar, sem utilizar
funções matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte
inteira do valor resultante da divisão.
b) A soma dos dois números com o resultado arredondado para o próximo número inteiro.
Fazer o mesmo exercício utilizando funções da biblioteca <math.h>.
É necessário incluí-la com # include <math.h>
A função int ceil (float num)faz arredondamento do número para cima,
ou seja,para o próximo inteiro.
A função int trunc (float num) apanha apenas a parte inteira do número,
desconsiderando a sua parte decimal.
Exemplo de uso de funções com retorno:
//truncar um número:
int numeroTruncado;
float numero;
numeroTruncado = trunc(numero);*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //variaveis
    float num1, num2,resultadoFloat;
    int resultadoInt;

    //entrada
    printf("Informe o valor do primeiro numero: ");
    scanf("%f",&num1);
    printf("Informe o valor do segundo numero: ");
    scanf("%f",&num2);

    //processamento
    resultadoFloat = num1 / num2;
    resultadoInt=resultadoFloat;
    printf("O resultado da divisao e: %d\n",resultadoInt);
    resultadoFloat = num1 + num2;
    resultadoInt = resultadoFloat +0.999999;
    printf("O resultado da soma e: %d\n",resultadoInt);
    resultadoFloat =num1/num2;
    resultadoInt = trunc(resultadoFloat);
    printf("O resultado da divisao e: %d\n",resultadoInt);
    resultadoFloat = num1 + num2;
    resultadoInt = ceil(resultadoFloat);
    printf("O resultado da soma e: %d\n",resultadoInt);

    system("pause");
    return(0);
}
