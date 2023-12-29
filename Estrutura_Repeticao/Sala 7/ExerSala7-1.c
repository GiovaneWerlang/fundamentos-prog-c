/*1) Um determinado material radioativo perde metade de sua massa a cada 500 segundos.
Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessário
para que essa massa se torne menor que 0,05 gramas. Escreva a massa inicial, a massa
final e o tempo calculado em horas, minutos e segundos. A massa inicial informada pelo
usuário tem que ser maior que zero. Validar essa entrada, isto é, ficar repetindo a leitura
da massa inicial até que o usuário informe um valor válido, ou seja, maior que zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int meiaVida=500, horas=0, minutos=0, segundos=0;
    int i;
    float massaI, massaF;

    do
    {
       system("cls");
       //
       do
       {
           printf("Informe a massa inicial (valor positivo): ");
           scanf("%f",&massaI);
       }while(massaI <= 0);

       for(i=massaI;i>=0.05;i = i/2.0)
       {
           segundos = segundos + meiaVida;
           massaF = i;
           if(segundos>=60)
           {
               minutos = segundos/60;
               segundos = segundos % 60;
               if(minutos >=60)
               {
                   horas = minutos /60;
                   minutos = minutos % 60;
               }
           }

       }
       printf("Massa inicial: %.2f\nMassa final: %.2f\n%d:%d:%d",massaI,massaF,horas,minutos,segundos);


       printf("\nExecutar novamente? ");
       fflush(stdin);
       scanf("%c",&repetir);
    }while(repetir == 'S'|| repetir == 's');

    system("pause");
    return(0);
}
