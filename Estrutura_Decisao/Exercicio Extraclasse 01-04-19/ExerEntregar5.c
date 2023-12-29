/*5) Elaborar um algoritmo para realizar o controle de pagamento de um estacionamento,
com base na tabela a seguir. O tempo é informado em minutos.
Tempo Valor
Até 15 minutos Grátis
Até 60 minutos R$ 10.40
Acima de 60 minutos R$ 11.20 + R$ 1.20 por hora excedente. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float pagamento;
    int minutos;

    printf("Informe os minutos: ");
    scanf("%d",&minutos);

    if (minutos<=15)
    {
        printf("Gratis\n");
    }
    else if(minutos>15 && minutos <=60)
    {
        printf("O valor a pagar e R$ 10.40\n");
    }
    else
    {
        pagamento = (((minutos - 60)/60)* 1.20) + 11.20;
        printf("O valor a pagar e R$ %.2f\n",pagamento);
    }

    system("pause");
    return(0);
}
