#include <stdio.h>

int main(void)
{
    //variaveis
    float hora, minutos,conversao;

    //entrada
    printf("Informe as horas: ");
    scanf("%f %f",&hora,&minutos);

    //processamento
    conversao = hora * (float)60;
    printf("Esse horario convertido para minutos resulta em: %f\n",conversao);
    conversao = conversao + (float)minutos;
    printf("O total dos minutos e de: %f\n", conversao);
    conversao = conversao * (float)60;
    printf("O total dos minutos convertidos em segundos e de: %f\n",conversao);
    //saida
    printf("%f horas e %f minutos",hora, minutos);
}
