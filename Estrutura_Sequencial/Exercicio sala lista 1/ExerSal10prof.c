/*10) Um eletricista precisa comprar fio que ir� passar pela diagonal de uma casa de
formato retangular. Como ele n�o tem condi��es de medir a diagonal com precis�o, uma
solu��o alternativa � medir os lados da casa. A diagonal pode ser calculada a partir dos
lados pelo Teorema de Pit�goras (a2 = b2 + c2). Fa�a um algoritmo que calcule a
quantidade m�nima necess�ria de fio a ser comprada. Apresente tamb�m a quantidade
m�nima em metros inteiros. Por exemplo: resultado do c�lculo 18.35, apresentar 19
metros. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //variaveis
    float ladoA,ladoB,hipo;
    int metros;

    //entrada
    printf("Informe o valor do lado A: ");
    scanf("%f",&ladoA);
    printf("Informe o valor do lado B: ");
    scanf("%f",&ladoB);

    //processamento

    hipo = sqrt((ladoA*ladoA)+(ladoB*ladoB)); /*a funcao sqrt vai receber um valor,
    calcular a raix quadrada e devolver a raz calculada,
    armazenando o valor na variavel hipo*/
    metros=hipo +0.999999; //metros = ceil(hipo);

    //saida
    printf("A quantidade de fio necessaria e de: %d\n",metros);

    system("pause");
    return(0);

}

