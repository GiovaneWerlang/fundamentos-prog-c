/*1) A contribuição para o INSS é calculada da seguinte forma:
 a) salário bruto de até três salários mínimos = INSS 8%
 b) salário bruto acima de três salários mínimos = INSS 10%
 c) para as contribuições para o INSS com valor maior que o salário mínimo, o valor
cobrado é de um salário mínimo.
Elaborar um algoritmo que receba como entrada o salário bruto, calcule o INSS e o
salário líquido e informe-os.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salBru,INSS, salLiq;

    printf("Informe o salário bruto: ");
    scanf("%f",&salBru);

    if(salBru<=(998*3))
    {
        INSS=salBru *((float)8/100);
        salLiq = salBru - INSS;
        if(INSS>998)
        {
            INSS=998;
            salLiq = salBru - INSS;
        }
        else
        {
            salLiq = salBru - INSS;
        }
    }
    else //if(salBru>(998*3))
    {
        INSS=salBru * ((float)10/100);
        if(INSS>998)
        {
            INSS=998;
            salLiq= salBru - INSS;
        }
        else
        {
            salLiq=salBru - INSS;
        }
    }
    printf("O salário bruto é de: R$ %.2f\n",salBru);
    printf("O INSS é de: R$ %.2f\n",INSS);
    printf("O salário líquido é de: R$ %.2f\n",salLiq);



    system("pause");
    return(0);
}
