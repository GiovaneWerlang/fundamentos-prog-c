/*4) Uma lesma sobe uma parede que tem 3 metros de altura.
Ela sobre 30 centímetros durante a noite e escorrega 10 centímetros durante o dia.
Quando tempo ela levará para chegar ao topo da parede?
Faça o programa de forma que ele que possa se utilizado para outras alturas de parede e outras velocidades de deslocamento
(subida e descida (escorregamento)).*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    float altura, subida, descida, tempo, i;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe a altura da parede(valor positivo): ");
            scanf("%f",&altura);
        }while(altura<=0);

        do
        {
            printf("Informe a distancia percorrida durante a noite(valor positivo): ");
            scanf("%f",&subida);
        }while(subida<=0);

        do
        {
            printf("Informe a distancia escorregada durante o dia(valor positivo): ");
            scanf("%f",&descida);
        }while(descida<=0);

        tempo=0;

        for(i=0;i<=altura;i=(i+subida)-descida)
        {
            tempo++;
        }

        printf("%d dias necessários para a lesma subir a parede. ",tempo);

        printf("\nExecutar novamente(s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
