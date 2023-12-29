/*5) Escrever um algoritmo que lê a hora e os minutos de início e a hora e os minutos do final
do jogo e calcula a duração do jogo, sabendo-se que o tempo máximo de duração do jogo é
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float horaI, horaF, minI, minF;
    float dia1, dia2, result2;
    int result;

    //entrada
    printf("Informe a hora do inicio: ");
    scanf("%f",&horaI);
    printf("Informe os minutos do inicio: ");
    scanf("%f",&minI);
    printf("Informe a hora do final: ");
    scanf("%f",&horaF);
    printf("Informe os minutos do final: ");
    scanf("%f",&minF);

    dia1 = (horaI *60) + minI;
    dia2 = (horaF *60) + minF;

    if (horaI <= horaF){
        result2=(dia2-dia1)/(float)60;
        result=((int)dia2-(int)dia1)%60;
    } else /*if(horaI >= horaF) nao é necessario verificar duas vezes!!*/{
        result2=(dia1+(((24 - horaF)  *60) + minF))/(float)60;
        result=(((int)dia1+(((24 - (int)horaF) * 60)+(int)minF))%60);
    }

    printf("A duracao do jogo foi de: %.0f horas e %d minutos\n",result2, result);

    system("pause");
    return(0);
}
