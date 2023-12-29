/*9) Ler um número que representa a quantidade de dias. Informe os anos (com 360 dias),meses (considere-os com 30 dias) e
os dias contidos nesse valor.Exemplo: 390 dias contêm 1 ano(s), 1 mês(es) e 0 dia(s).*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int dias, result1, result2, result3;

    //entrada
    printf("Informe o numero de dias: ");
    scanf("%d",&dias);

    result1 = dias / 360;
    result2 = (dias % 360)/30;
    result3 = (dias % 360)%30;

    printf("%d contem %d ano(s), %d mes(s) e %d dia(s)\n",dias, result1, result2, result3);

    system("pause");
    return(0);
}
