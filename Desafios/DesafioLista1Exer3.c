/*3) � necess�rio revestir as escadarias externas de um edif�cio.
Os degraus ser�o na parte superior e �frente�. Quantas pe�as
de material de revestimento (porcelanato, cer�mica, pedra ou outros) e
caixas desse material s�o necess�rias? Defina os dados de entrada necess�rios. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int i, qtdeD;
    float larguraD, comprimentoD, areaD, lateralD, areaR, areaL, areaT, qtdeR;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe a largura do(s) degrau(s): ");
            scanf("%f",&larguraD);
        }while(larguraD<=0);

        do
        {
            printf("Informe o comprimento do(s) degrau(s): ");
            scanf("%f",&comprimentoD);
        }while(comprimentoD<=0);

        do
        {
            printf("Informe a quantidade de degraus: ");
            scanf("%d",&qtdeD);
        }while(qtdeD<=0);

        do
        {
            printf("Informe a area de cada pe�a de revestimento: ");
            scanf("%f",&areaR);
        }while(areaR<=0);

        areaD = ((larguraD * comprimentoD) * 2)* qtdeD;

        lateralD = 0;

        for(i=1;i<=qtdeD;i++)
        {
            lateralD = lateralD + i;
        }
        areaL = (larguraD * larguraD) * lateralD ;

        areaT = areaD + areaL;

        qtdeR = areaT / areaR;

        printf("A quantidade de pe�as de revestimento para a escadaria �: %.2f",qtdeR);

        printf("\nExecutar novamente(s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
