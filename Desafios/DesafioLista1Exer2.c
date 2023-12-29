/*2) Em uma festa, brinquedos est�o sendo distribu�dos para crian�as.
Ler a quantidade de brinquedos e a quantidade de crian�as.
Calcule e mostre: a quantidade de brinquedos que cada crian�a recebe,
quantos brinquedos sobram e quantos seriam necess�rios para cada crian�a receber um brinquedo a mais. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int qtdeB, qtdeC, recebe, sobra, mais;

    do
    {
        system("cls");
        //
        do
        {
            printf("Insira a quantidade de brinquedos: ");
            scanf("%d",&qtdeB);
        }while(qtdeB<=0);

        do
        {
            printf("Insira a quantidade de crian�as: ");
            scanf("%d",&qtdeC);
        }while(qtdeC<=0);

        recebe = qtdeB / qtdeC;
        sobra = qtdeB % qtdeC;
        mais = qtdeC - sobra;
        printf("\nCada crian�a recebe(m) %d brinquedo(s). ",recebe);
        printf("\nSobram %d brinquedos. ",sobra);
        printf("\nS�o necess�rios %d brinquedos para as crian�as receberem um a mais. ",mais);

        printf("\nExecutar novamente(s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
