/*1) A contribui��o para o INSS � calculada da seguinte forma:
 a) sal�rio bruto de at� tr�s sal�rios m�nimos = INSS 8%
 b) sal�rio bruto acima de tr�s sal�rios m�nimos = INSS 10%
 c) para as contribui��es para o INSS com valor maior que o sal�rio m�nimo, o valor
cobrado � de um sal�rio m�nimo.
Elaborar um algoritmo que receba como entrada o sal�rio bruto, calcule o INSS e o
sal�rio l�quido e informe-os.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salBru,INSS, salLiq;

    printf("Informe o sal�rio bruto: ");
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
    printf("O sal�rio bruto � de: R$ %.2f\n",salBru);
    printf("O INSS � de: R$ %.2f\n",INSS);
    printf("O sal�rio l�quido � de: R$ %.2f\n",salLiq);



    system("pause");
    return(0);
}
