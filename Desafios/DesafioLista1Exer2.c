/*2) Em uma festa, brinquedos estão sendo distribuídos para crianças.
Ler a quantidade de brinquedos e a quantidade de crianças.
Calcule e mostre: a quantidade de brinquedos que cada criança recebe,
quantos brinquedos sobram e quantos seriam necessários para cada criança receber um brinquedo a mais. */

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
            printf("Insira a quantidade de crianças: ");
            scanf("%d",&qtdeC);
        }while(qtdeC<=0);

        recebe = qtdeB / qtdeC;
        sobra = qtdeB % qtdeC;
        mais = qtdeC - sobra;
        printf("\nCada criança recebe(m) %d brinquedo(s). ",recebe);
        printf("\nSobram %d brinquedos. ",sobra);
        printf("\nSão necessários %d brinquedos para as crianças receberem um a mais. ",mais);

        printf("\nExecutar novamente(s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
