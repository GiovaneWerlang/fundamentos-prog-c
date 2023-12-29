#include <stdio.h>

int main(void)
{
    //variaveis
    float horasTrab,valorHorasTrab, salarioMinimo, horasExtras,
    valorHorasExtra, receberHorasExtras, salarioBruto, salarioReceber;

    //entrada
    printf("Informe as horas trabalhadas: ");
    scanf("%f",&horasTrab);
    printf("Informe as horas extras: ");
    scanf("%f",&horasExtras);
    printf("Informe o salario minimo: ");
    scanf("%f",&salarioMinimo);

    //processamento
    valorHorasTrab = salarioMinimo/8.0;
    valorHorasExtra = salarioMinimo/4.0;
    salarioBruto = (float)horasTrab * valorHorasTrab;
    receberHorasExtras = (float)horasExtras * valorHorasExtra;
    salarioReceber = (float)salarioBruto + receberHorasExtras;

    //saida
    printf("O salario a receber e de: %.2f",salarioReceber);

    system("pause");
    return(0);
}
