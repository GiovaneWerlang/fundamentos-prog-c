/*9) Faca um algoritmo que leia o salário bruto mensal de um funcionário, calcule e mostre
os valores conforme o modelo.
Salario Bruto : R$
(-) IR (15%) : R$
(-) INSS (11%) : R$
(-) Sindicato (3%) : R$
Salario Liquido : R$
Observação: é possível fazer esse algoritmo utilizando somente três variáveis: uma
para ler o salário bruto, outra os descontos e outra para o salário líquido. Tente!*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salarioBruto, descontos, salarioLiquido;

    printf("Informe o salario bruto: ");
    scanf("%f",&salarioBruto);

    descontos = (salarioBruto * ((float)15/100));
    printf("Salario - IR: R$ %.2f\n",descontos);
    salarioLiquido = descontos;
    descontos = (salarioBruto * ((float)11/100));
    printf("Salario - INSS: R$ %.2f\n",descontos);
    salarioLiquido = salarioLiquido + descontos;
    descontos = (salarioBruto * ((float)3/100));
    printf("Salario - Sindicato: R$ %.2f\n",descontos);
    salarioLiquido = salarioBruto-(salarioLiquido + descontos);
    printf("O Salario Liquido e: R$ %.2f\n",salarioLiquido);

    system("pause");
    return(0);
}
