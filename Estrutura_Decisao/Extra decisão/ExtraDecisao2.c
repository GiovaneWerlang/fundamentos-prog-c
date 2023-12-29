/*2) Faça um programa para o cálculo de uma folha de pagamento,
sabendo que os descontos são do Imposto de Renda,
que depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que
o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).
O Salário Líquido corresponde ao Salário Bruto menos os descontos.
O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.
    • Desconto do IR:
    • Salário Bruto até 900 (inclusive) - isento
    • Salário Bruto até 1500 (inclusive) - desconto de 5%
    • Salário Bruto até 2500 (inclusive) - desconto de 10%
    • Salário Bruto acima de 2500 - desconto de 20%
    Imprima na tela as informações,
    dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.
·         Salário Bruto: (5 * 220)        : R$ 1100,00
·         (-) IR (5%)                     : R$   55,00 
·         (-) INSS ( 10%)                 : R$  110,00
·         FGTS (11%)                      : R$  121,00
·         Total de descontos              : R$  165,00
        Salário Liquido                 : R$  935,00*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valorH, qtdH, result;

    printf("Informe o valor da sua hora: ");
    scanf("%f",&valorH);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f",&qtdH);

    result = valorH*qtdH;
    if(result <= 900)
    {
        printf("Salário Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        printf("(-) IR isento                   R$:0.00\n");
        result = result * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH)* ((float)10/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Salário Liquido                 R$:%.2f\n",result);
    }
    else if(result > 900 && result <=1500)
    {
        result = (valorH * qtdH);
        printf("Salário Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        result = (valorH * qtdH) * ((float)5/100);
        printf("(-) IR (5%%)                    R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH) * ((float)10/100))+ ((valorH * qtdH) * ((float)5/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Salário Liquido                 R$:%.2f\n",result);
    }
    else if(result > 1500 && result <=2500)
    {
        result = (valorH * qtdH);
        printf("Salário Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) IR (10%%)                    R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH) * ((float)10/100))+ ((valorH * qtdH) * ((float)10/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Salário Liquido                 R$:%.2f\n",result);
    }
    else if(result > 2500)
    {
        result = (valorH * qtdH);
        printf("Salário Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        result = (valorH * qtdH) * ((float)20/100);
        printf("(-) IR (20%%)                    R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH) * ((float)10/100))+ ((valorH * qtdH) * ((float)20/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Salário Liquido                 R$:%.2f\n",result);
    }


    system("pause");
    return(0);
}
