/*7) Implemente o operador OU exclusivo.Por exemplo: Ler a informa��o
se uma pessoa recebe vale alimenta��o (S/N) e se recebe auxilio transporte (S/N).
Informar que a pessoa est� regularizada se ela recebe um e somente um desses benef�cios.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char vale, auxilio;

    printf("Informe se recebe vale alimenta��o: no formato(S/N)");
    scanf("%c",&vale);
    fflush(stdin);
    printf("Informe se recebe aux�lio transporte: no formato(S/N)");
    scanf("%c",&auxilio);
    fflush(stdin);

    if(vale == 'S'&& auxilio =='N' || vale == 'N' && auxilio == 'S')
    {
        printf("Est� regularizado\n");
    }
    else
    {
        printf("N�o est� regularizado\n");
    }

    system("pause");
    return(0);
}
