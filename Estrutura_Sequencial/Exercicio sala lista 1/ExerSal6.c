/*6) Calcular o sal�rio l�quido de uma pessoa. Sobre o sal�rio bruto incidem descontos de
de imposto de renda e de INSS. Os descontos s�o informados em percentual.*/

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
