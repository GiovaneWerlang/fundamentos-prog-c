/*1) Ler dois números reais (ponto flutuante) e apresentar, sem utilizar funções
matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte
inteira do valor resultante da divisão.
b) A soma dos dois números com o resultado arredondado
para o próximo númerointeiro.
Fazer o mesmo exercício utilizando funções da biblioteca <math.h>.
É necessárioincluí-la com # include <math.h>
A função int ceil (float num) faz arredondamento do número para cima, ou seja,para o próximo inteiro.
A função int trunc (float num) apanha apenas a parte inteira do número,desconsiderando a sua parte decimal.
Exemplo de uso de funções com retorno:
//truncar um número:int numeroTruncado;
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
