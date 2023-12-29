/*10) Um eletricista precisa comprar fio que irá passar pela diagonal de uma casa de
formato retangular. Como ele não tem condições de medir a diagonal com precisão, uma
solução alternativa é medir os lados da casa. A diagonal pode ser calculada a partir dos
lados pelo Teorema de Pitágoras (a2 = b2 + c2). Faça um algoritmo que calcule a
quantidade mínima necessária de fio a ser comprada. Apresente também a quantidade
mínima em metros inteiros. Por exemplo: resultado do cálculo 18.35, apresentar 19
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

