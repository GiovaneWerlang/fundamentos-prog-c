/*7) Ler um número inteiro longo (long int) que representa segundos e convertê-lo para horas,minutos e segundos.
Mostrar a quantidade de horas, minutos e segundos obtidos, no seguinte formato: xhoras:yminutos:zsegundos.
Exemplo:
informado o valor 3725
apresentar
1hora:2minutos:5segundos
Observação:
//declarar uma variável inteiro longo
long int Num;
//ler uma variável inteiro longo
scanf(“%li”,&Num);
//mostrar o conteúdo de uma variável inteiro longo
printf(“valor %li”,Num);*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    long int segundosLong;
    int hora, minuto;
    float segundo;

    //entrada
    printf("Informe o numero em segundos: ");
    scanf("%li",&segundosLong);

    hora = segundosLong / 3600;
    minuto = segundosLong % 60;
    segundo = (int)minuto % 10;

    printf("%li segundos sao\n%dhoras:%dminutos:%.0fsegundos\n",segundosLong,hora,minuto,segundo);

    system("pause");
    return(0);
}
