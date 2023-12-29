/*7) Implemente o operador OU exclusivo.Por exemplo: Ler a informação
se uma pessoa recebe vale alimentação (S/N) e se recebe auxilio transporte (S/N).
Informar que a pessoa está regularizada se ela recebe um e somente um desses benefícios.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char vale, auxilio;

    printf("Informe se recebe vale alimentação: no formato(S/N)");
    scanf("%c",&vale);
    fflush(stdin);
    printf("Informe se recebe auxílio transporte: no formato(S/N)");
    scanf("%c",&auxilio);
    fflush(stdin);

    if(vale == 'S'&& auxilio =='N' || vale == 'N' && auxilio == 'S')
    {
        printf("Está regularizado\n");
    }
    else
    {
        printf("Não está regularizado\n");
    }

    system("pause");
    return(0);
}
