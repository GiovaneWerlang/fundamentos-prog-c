/*3) Fa�a um algoritmo que leia v�rios n�meros e informe quantos desses n�meros entre
100 e 200 foram digitados. Fazer a m�dia dos �mpares informados. Quando o valor 0
(zero) for lido o algoritmo dever� cessar sua execu��o e n�o deve ser considerado nos
c�lculos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, intervalo=0, cont=0;
    float media=0;

    do{
        printf("Informe um n�mero: ");
        scanf("%d",&num);
        if(num>0)
        {
            if(num>=100&&num<=200)
            {
                intervalo++;
            }
            if(num%2!=0)
            {
                media = media + num;
                cont++;
            }
        }
    }while(num!=0);

    printf("N�meros dentro do intervalo 100 e 200: %d\n",intervalo);

    if(cont>0)
    {
        media = media/(float)cont;
        printf("Media dos �mpares: %.2f\n",media);
    }

    system("pause");
    return(0);
}
