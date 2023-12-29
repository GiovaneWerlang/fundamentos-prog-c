/*3) Ler a quantidade de kilowatts de energia elétrica consumidos por uma residência.
Calcular e mostrar o valor em reais de cada kilowatts, o valor total a ser pago e o valor a
ser pago por essa residência quando há desconto de 10%. Considere que 100 kilowatts
custam 1/7 do salário mínimo. Ler o valor do salário mínimo.*/

#include <stdio.h>

int main(void)
{
    //variaveis
    float kwatts, valor1Kwatts, valorPagar, valorDesconto, valorSalario;

    //entrada
    printf("Insira os kilowwatts consumidos: ");
    scanf("%f",&kwatts);
    printf("Insira o valor do salario minimo: ");
    scanf("%f",&valorSalario);

    //processamento
    valor1Kwatts = (valorSalario / 7) / 100;
    valorPagar = kwatts * valor1Kwatts;
    valorDesconto = valorPagar - (valorPagar /10);

    //saida
    printf("Custo de cada kilowatts: %f\n", valor1Kwatts);
    printf("Valor total a pagar: %f\n",valorPagar);
    printf("Valor com desconto de 10%%: %f\n",valorDesconto);

}
