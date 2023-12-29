/*2) Faca um programa para calcular a quantidade de caixas de ladrilhos (cerâmica,
porcelanato...) necessários para revestir um determinado cômodo de uma residência. São
informados a altura e a largura total das paredes. Também é informada a altura e largura
da porta e das janelas e a quantidade de janelas. As janelas possuem o mesmo tamanho. O
usuário informa o tamanho de um ladrilho e a quantidade de ladrilhos por caixa. Indicar a
quantidade inteira para o número de caixas necessários (arredondar o valor para o
próximo inteiro).*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //variaveis
    float altura, largura, alturaPorta, larguraPorta, alturaJanela, larguraJanela, qtdJanela, tamLadrilho, qtdLadrilho, result;
    int resultInt;

    //entrada
    printf("Informe a altura total das paredes: ");
    scanf("%f",&altura);
    printf("Informe a largura total das paredes: ");
    scanf("%f",&largura);
    printf("Informe a altura da porta: ");
    scanf("%f",&alturaPorta);
    printf("Informe a largura da porta: ");
    scanf("%f",&larguraPorta);
    printf("Informe a altura da janela: ");
    scanf("%f",&alturaJanela);
    printf("Informe a largura da janela: ");
    scanf("%f",&larguraJanela);
    printf("Informe a quantidade de janelas: ");
    scanf("%f",&qtdJanela);
    printf("Informe o tamanho do ladrilhos em cm²: ");
    scanf("%f",&tamLadrilho);
    printf("Informe quantidade de ladrilhos por caixa: ");
    scanf("%f",&qtdLadrilho);

    //processamento
    result = ((((altura * 4 + largura * 4) - ((alturaPorta * larguraPorta) + ((alturaJanela * larguraJanela) * qtdJanela))) / (tamLadrilho/(float)100) )/ qtdLadrilho);
    resultInt = result + 0.999999;

    printf("O numero de caixas de ladrilhos necessarios para \nrevestir este comodo e de: %d\n",resultInt);

    system("pause");
    return(0);
}

