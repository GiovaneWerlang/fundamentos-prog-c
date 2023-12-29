/*12) Implemente um algoritmo que leia n�meros inteiros at� que seja lido um n�mero que seja
o dobro ou a metade do anteriormente lido. No final deve ser apresentado:
a) a media dos valores lidos que s�o negativos e �mpares.
b) os dois valores lidos que definiram a finaliza��o da execu��o do programa. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int num, ant=0,cont=0;
    float media=0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um n�mero inteiro (0 para sair): ");
            scanf("%d",&num);
            if(num!=0)
            {
                if(num!=ant/2&&num!=ant*2)
                {
                    media = media + num;
                    ant = num;
                    cont++;
                }
            }
        }while(num!=ant/2&&num!=ant*2);

        if(cont>0)
        {
            media = media/(float)cont;
            printf("\nMedia dos positivos e negativos: %.2f",media);
        }

        printf("\n%d\t%d",ant,num);

        printf("\nExecutar novamente? (s/s para sim)");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
