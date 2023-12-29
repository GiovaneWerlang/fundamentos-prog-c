/*3) Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente. Obter a
média dos pares e divisíveis por 3 desse intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cont=0, intervalo=500;
    float media=0;

    do{
        if(intervalo%2!=0&&intervalo%7==0)
        {
            printf("%d\t",intervalo);


        }
        if(intervalo%2==0&&intervalo%3==0)
        {
            media = media + intervalo;
            cont++;
        }



        intervalo--;

    }while(intervalo>0);

    media = media/cont;
    printf("\nA media dos pares e divisiveis por 3 desse intervalo e: %.2f\n",media);

    system("pause");
    return(0);
}
