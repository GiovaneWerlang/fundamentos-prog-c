/*1) Inverter um n�mero de at� 4 d�gitos. Caber� ao usu�rio informar um valor de at� 4 d�gitos.
Exemplo: 1234
Invertido: 4321*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int num, invertido, uni, dez, cen, mil;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um n�mero (at� 4 d�gitos): ");
            scanf("%d",&num);
        }while(num<=0&&num>9999);

        uni = num%10;
        dez = num/10%10;
        cen = num/100%10;
        mil = num/1000;

        if(num>999)
        {
            invertido = (uni*1000) + (dez*100) + (cen*10) + mil;
        }
        else
        {
            invertido = (uni*100)+(dez*10)+cen;
        }
        if(num<100)
        {
            invertido = (uni*10) + dez;
        }
        if(num<10)
        {
            invertido = uni;
        }

        printf("Invertido: %d",invertido);
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
