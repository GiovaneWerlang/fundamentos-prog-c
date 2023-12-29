/*6) Fa�a um programa que calcule a quantidade necess�ria de latas de tinta e o custo para
pintar um tanque cil�ndrico. Apresentar o custo com duas casas decimais. Se para a quantidade de latas de
tinta for obtido um resultado fracion�rio arredondar o n�mero para o pr�ximo inteiro.
Por exemplo: 5.2 apresentar 6 latas de tinta.
A �rea a ser pintada � calculada pela f�rmula: AREA = 2 * PI * raio2 + 2 * PI * raio * altura.
Uma lata de tinta cont�m 3,6 litros e que cada litro de tinta � suficiente para pintar tr�s metros quadrados.
Observa��o: a fun��o int ceil (float num) faz arredondamento do n�mero para cima, ou seja, para o pr�ximo inteiro.
� necess�rio incluir essa biblioteca com # include <math.h>
Exemplo de uso:Valor = ceil(Vari�vel);*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //variaveis
    float qtdLatas, custo, result, raio, altura, valorLata;
    int resultInt;

    //entrada
    printf("Informe o raio do tanque: ");
    scanf("%f",&raio);
    printf("Informe a altura do tanque: ");
    scanf("%f",&altura);
    printf("Informe o valor da lata: ");
    scanf("%f",&valorLata);

    custo = (((2* 3.1415) * (raio *raio)) + ((2 * 3.1414) * raio * altura))/3;
    qtdLatas = custo / 3.6;
    resultInt = ceil(qtdLatas);

    printf("A quantidade de latas necessarias e %d\n",resultInt);
    custo = resultInt * valorLata;
    printf("O custo para pintar o tanque cilindrico e %f\n",custo);



    system("pause");
    return(0);
}
