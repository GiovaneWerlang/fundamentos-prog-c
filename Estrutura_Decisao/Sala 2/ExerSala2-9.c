/*9) Ler SalBase, Ler Gratif
SalBruto = SalBase + Gratif
SalBruto < 1000
n�o = IR = salbruto * ( 20/100)
sim = IR = salbruto * ( 15/100)
salLiq = salbruto - IR
salLiq
fim*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salBase, gratif,salBruto,IR, salLiq;

    printf("Informe o Sal�rio Base: ");
    scanf("%f",&salBase);
    printf("Informe a gratifica��o: ");
    scanf("%f",&gratif);

    salBruto = salBase + gratif;
    if(salBruto < 1000)
    {
        IR = salBruto * ((float)15/100);
    }
    else
    {
        IR = salBruto * ((float)20/100);
    }
    salLiq = salBruto - IR;

    printf("O sal�rio l�quido e R$: %.2f\n",salLiq);

    system("pause");
    return(0);
}
