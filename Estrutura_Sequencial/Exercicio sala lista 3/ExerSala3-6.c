/*6) Faça um programa que calcule a quantidade necessária de latas de tinta e o custo para
pintar um tanque cilíndrico. Apresentar o custo com duas casas decimais. Se para a quantidade de latas de
tinta for obtido um resultado fracionário arredondar o número para o próximo inteiro.
Por exemplo: 5.2 apresentar 6 latas de tinta.
A área a ser pintada é calculada pela fórmula: AREA = 2 * PI * raio2 + 2 * PI * raio * altura.
Uma lata de tinta contém 3,6 litros e que cada litro de tinta é suficiente para pintar três metros quadrados.
Observação: a função int ceil (float num) faz arredondamento do número para cima, ou seja, para o próximo inteiro.
É necessário incluir essa biblioteca com # include <math.h>
Exemplo de uso:Valor = ceil(Variável);*/

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
