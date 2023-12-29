/*10) Um eletricista precisa comprar fio que ir� passar pela diagonal de uma casa de
formato retangular. Como ele n�o tem condi��es de medir a diagonal com precis�o, uma
solu��o alternativa � medir os lados da casa. A diagonal pode ser calculada a partir dos
lados pelo Teorema de Pit�goras (a2 = b2 + c2). Fa�a um algoritmo que calcule a
quantidade m�nima necess�ria de fio a ser comprada. Apresente tamb�m a quantidade
m�nima em metros inteiros. Por exemplo: resultado do c�lculo 18.35, apresentar 19
metros. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    //variaveis
    int fio;
    int a, b, c;

    //entrada
    printf("Informe o valor do lado B: ");
    scanf("%d",&b);
    printf("Informe o valor do lado C: ");
    scanf("%d",&c);

    //processamento
    a = (b * b) + (c * c);
    a=sqrt(a);
    a=a+1;
    fio=ceil(a);
    //saida
    printf("A quantidade de fio necessaria e de: %d",fio);
}
