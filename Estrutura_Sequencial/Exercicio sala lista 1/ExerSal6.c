/*6) Calcular o salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de
de imposto de renda e de INSS. Os descontos são informados em percentual.*/

#include <stdio.h>

int main(void)
{
    //variaveis
    float salLiq, salBru;
    int IR, INSS;

    //entrada
    printf("Insira o Salario Bruto: ");
    scanf("%f",&salBru);
    printf("Insira o desconto de IR: ");
    scanf("%d",&IR);
    printf("Insira o desconto de INSS: ");
    scanf("%d",&INSS);

    //processamento
    salLiq = salBru -(salBru * IR/100.0)-(salBru * INSS/100);

    //saida
    printf("O Salario Liquido e de: %f",salLiq);

}
