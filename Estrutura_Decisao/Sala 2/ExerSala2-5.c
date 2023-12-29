/*5) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual                    Al�quota*       Dedu��o**
At� R$ 10000,00                  0%            Isento
> R$ 10000,00 e <= R$ 25000,00   10%           R$ 1000,00
Acima de R$ 25000,00             25%           R$ 4750,00
*Al�quota � o percentual para realizar o c�lculo do imposto a ser pago.
**Dedu��o � o valor deduzido ap�s calculado o valor com base na al�quota.
Se informado valor negativo n�o realizar o c�lculo e informar o usu�rio.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float renda, ir;

    printf("Informe a renda: ");
    scanf("%f",&renda);

    if (renda<=0)
    {
        printf("N�o � poss�vel realizar o c�lculo\n");
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
