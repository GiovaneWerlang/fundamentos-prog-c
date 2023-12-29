/*2) Fa�a um programa para o c�lculo de uma folha de pagamento,
sabendo que os descontos s�o do Imposto de Renda,
que depende do sal�rio bruto (conforme tabela abaixo) e 3% para o Sindicato e que
o FGTS corresponde a 11% do Sal�rio Bruto, mas n�o � descontado (� a empresa que deposita).
O Sal�rio L�quido corresponde ao Sal�rio Bruto menos os descontos.
O programa dever� pedir ao usu�rio o valor da sua hora e a quantidade de horas trabalhadas no m�s.
    � Desconto do IR:
    � Sal�rio Bruto at� 900 (inclusive) - isento
    � Sal�rio Bruto at� 1500 (inclusive) - desconto de 5%
    � Sal�rio Bruto at� 2500 (inclusive) - desconto de 10%
    � Sal�rio Bruto acima de 2500 - desconto de 20%
    Imprima na tela as informa��es,
    dispostas conforme o exemplo abaixo. No exemplo o valor da hora � 5 e a quantidade de hora � 220.
� ��������Sal�rio Bruto: (5 * 220)������� : R$ 1100,00
� ��������(-) IR (5%)�������������������� : R$�� 55,00�
� ��������(-) INSS ( 10%)���������������� : R$� 110,00
� ��������FGTS (11%)��������������������� : R$� 121,00
� ��������Total de descontos������������� : R$� 165,00
������� Sal�rio Liquido���������������� : R$� 935,00*/

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
        printf("Sal�rio Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        printf("(-) IR isento                   R$:0.00\n");
        result = result * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH)* ((float)10/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Sal�rio Liquido                 R$:%.2f\n",result);
    }
    else if(result > 900 && result <=1500)
    {
        result = (valorH * qtdH);
        printf("Sal�rio Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        result = (valorH * qtdH) * ((float)5/100);
        printf("(-) IR (5%%)                    R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH) * ((float)10/100))+ ((valorH * qtdH) * ((float)5/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Sal�rio Liquido                 R$:%.2f\n",result);
    }
    else if(result > 1500 && result <=2500)
    {
        result = (valorH * qtdH);
        printf("Sal�rio Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) IR (10%%)                    R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH) * ((float)10/100))+ ((valorH * qtdH) * ((float)10/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Sal�rio Liquido                 R$:%.2f\n",result);
    }
    else if(result > 2500)
    {
        result = (valorH * qtdH);
        printf("Sal�rio Bruto: (%.0f * %.0f)    R$:%.2f\n",valorH, qtdH, result);
        result = (valorH * qtdH) * ((float)20/100);
        printf("(-) IR (20%%)                    R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)10/100);
        printf("(-) INSS (10%%)                 R$:%.2f\n",result);
        result = (valorH * qtdH) * ((float)11/100);
        printf("FGTS (11%%)                     R$:%.2f\n",result);
        result = ((valorH* qtdH) * ((float)10/100))+ ((valorH * qtdH) * ((float)20/100));
        printf("Total de descontos              R$:%.2f\n",result);
        result = (valorH * qtdH) - result;
        printf("Sal�rio Liquido                 R$:%.2f\n",result);
    }


    system("pause");
    return(0);
}
