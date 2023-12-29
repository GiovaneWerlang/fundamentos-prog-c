/*1) Ler dois n�meros reais (ponto flutuante) e apresentar, sem utilizar
fun��es matem�ticas prontas:
a) A divis�o do primeiro n�mero pelo segundo, armazenando somente a parte
inteira do valor resultante da divis�o.
b) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero inteiro.
Fazer o mesmo exerc�cio utilizando fun��es da biblioteca <math.h>.
� necess�rio inclu�-la com # include <math.h>
A fun��o int ceil (float num)faz arredondamento do n�mero para cima,
ou seja,para o pr�ximo inteiro.
A fun��o int trunc (float num) apanha apenas a parte inteira do n�mero,
desconsiderando a sua parte decimal.
Exemplo de uso de fun��es com retorno:
//truncar um n�mero:
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
