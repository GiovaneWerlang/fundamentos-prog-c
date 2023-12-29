/*5) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual                    Alíquota*       Dedução**
Até R$ 10000,00                  0%            Isento
> R$ 10000,00 e <= R$ 25000,00   10%           R$ 1000,00
Acima de R$ 25000,00             25%           R$ 4750,00
*Alíquota é o percentual para realizar o cálculo do imposto a ser pago.
**Dedução é o valor deduzido após calculado o valor com base na alíquota.
Se informado valor negativo não realizar o cálculo e informar o usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float renda, ir;

    printf("Informe a renda: ");
    scanf("%f",&renda);

    if (renda<=0)
    {
        printf("Não é possível realizar o cálculo\n");
    }
    else if (renda <10000)
    {
        printf("Isento\n");
    }
    else if (renda >25000)
    {
        ir = renda * ((float)25/100);
        printf("O imposto a ser pago e %.2f\n",ir);
    }else
    {
        ir = renda * ((float)10/100);
        printf("O imposto a ser pago e %.2f\n",ir);
    }


    system("pause");
    return(0);
}
