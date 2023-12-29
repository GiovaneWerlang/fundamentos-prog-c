/*5) Faça um programa para calcular a quantidade de fita necessária, em centímetros, para
amarrar um pacote com duas voltas, sendo uma pela largura e outra pelo comprimento do pacote.
Serão fornecidas a largura, a altura e o comprimento do pacote. Para amarrar as pontas da fita são
necessários 15 cm de fita em cada ponta.
A Figura ilustra a maneira como a fita é passada pelo pacote.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int largura, altura, comprimento, result;

    //entrada
    printf("Informe a largura do pacote: ");
    scanf("%d",&largura);
    printf("Informe a altura do pacote: ");
    scanf("%d",&altura);
    printf("Informe a comprimento do pacote: ");
    scanf("%d",&comprimento);

    result = (altura * 4) + (largura * 2) + (comprimento * 2) + 30;
    printf("Sao necessarios %d cm de fita para amarrar o pacote\n",result);

    system("pause");
    return(0);
}
