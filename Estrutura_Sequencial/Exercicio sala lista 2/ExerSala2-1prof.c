/*1) Ler dois n�meros reais (ponto flutuante) e apresentar, sem utilizar fun��es
matem�ticas prontas:
a) A divis�o do primeiro n�mero pelo segundo, armazenando somente a parte
inteira do valor resultante da divis�o.
b) A soma dos dois n�meros com o resultado arredondado
para o pr�ximo n�merointeiro.
Fazer o mesmo exerc�cio utilizando fun��es da biblioteca <math.h>.
� necess�rioinclu�-la com # include <math.h>
A fun��o int ceil (float num) faz arredondamento do n�mero para cima, ou seja,para o pr�ximo inteiro.
A fun��o int trunc (float num) apanha apenas a parte inteira do n�mero,desconsiderando a sua parte decimal.
Exemplo de uso de fun��es com retorno:
//truncar um n�mero:int numeroTruncado;
float numero;
numeroTruncado = trunc(numero);*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float num1, num2;
    int valorInteiro;

    printf("Informe um valor: ");
    scanf("%f",&num1);
    printf("Informe outro valor: ");
    scanf("%f",&num2);

    printf("Sem uso de funcoes matematicas\n");
    valorInteiro = (int)(num1/num2);
    printf("Divisao inteira: %d\n",valorInteiro);
    valorInteiro = (num1 + num2) + 0.999999;
    printf("Soma arredondada para o proximo inteiro: %d\n",valorInteiro);

    printf("\nCom uso de funcoes matematicas\n");
    valorInteiro = trunc(num1/num2); //pegar somente a parte inteira
    printf("Divisao inteira: %d\n",valorInteiro);
    valorInteiro = ceil(num1 + num2); //arredondamento para o proximo inteiro
    printf("Soma arredondada para o proximo inteiro: %d\n",valorInteiro);

    system("pause");
    return(0);
}
