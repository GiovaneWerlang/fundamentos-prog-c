/*1) Escreva um algoritmo que leia o comprimento, a largura e a altura de uma caixa
retangular e calcule o seu volume, cuja fórmula é: Volume = Comprimento * Largura *
Altura.*/

#include <stdio.h>

int main(void)
{
    //variaveis
    int comp, larg, altu, volu;

    //entrada
    printf("Informe o comprimento: ");
    scanf("%d", &comp);
    printf("Informe a largura: ");
    scanf("%d", &larg);
    printf("Informe a altura: ");
    scanf("%d", &altu);


    //processamento
    volu = comp * larg * altu;

    //saída
    printf("%d",volu);
}
