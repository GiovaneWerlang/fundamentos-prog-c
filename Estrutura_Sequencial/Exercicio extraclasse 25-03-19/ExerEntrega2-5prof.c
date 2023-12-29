/*5) Escrever um algoritmo que l� a hora e os minutos de in�cio e a hora e os minutos do final
do jogo e calcula a dura��o do jogo, sabendo-se que o tempo m�ximo de dura��o do jogo �
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int horaInicial, horaFinal, minutoInicial, minutoFinal;
    int horas, minutos;
    int diferencaMinutos, diferencaHoras;

    //entrada
    printf("Informe a hora inicial do jogo no formato hh:mm ");
    scanf("%d:%d",&horaInicial,&minutoInicial);
    printf("Informe a hora final do jogo no formato hh:mm ");
    scanf("%d:%d",&horaFinal,&minutoFinal);

    if( minutoFinal < minutoInicial)// � necessario emprestar de hora
    {
        minutoFinal = minutoFinal + 60; // uma hora emprestada
        horaFinal = horaFinal -1;
    }
    diferencaMinutos = minutoFinal - minutoInicial;

    if (horaFinal < horaInicial)
    {
        diferencaHoras = 24 - horaInicial + horaFinal;
    }
    else  //if (horaFinal >= horaInicial)
    {
        diferencaHoras = horaFinal - horaInicial;
    }
    printf("Dura��o do jogo: %dh%d\n",diferencaHoras, diferencaMinutos);

    system("pause");
    return(0);
}
