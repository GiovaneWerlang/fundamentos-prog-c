/*5) Elabore um programa que leia o dia e o m�s de nascimento de uma pessoa e determine
o seu signo conforme a tabela a seguir:

Intervalo           Signo
de 22/12 at� 20/1   Capric�rnio
de 21/1 at� 19/2    Aqu�rio
de 20/2 at� 20/3    Peixes
de 21/3 at� 20/4    �ries
de 21/4 at� 20/5    Touro
de 21/5 at� 20/6    G�meos
de 21/6 at� 21/7    C�ncer
de 22/7 at� 22/8    Le�o
de 23/8 at� 22/9    Virgem
de 23/9 at� 22/10   Libra
de 23/10 at� 21/11  Escorpi�o
de 22/11 at� 21/12  Sagit�rio

Se informada uma data que n�o corresponde aos intervalos indicados, informar
que a data � inv�lida.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int diaN, mesN,dias;

    printf("Informe o dia e m�s de seu nascimento\nno formato 22/2\n");
    scanf("%d/%d",&diaN,&mesN);

    dias = (mesN * 30) + diaN;
    if(dias<=0 || dias>390)
    {
        printf("Data inv�lida\n");
    }
    else if(dias<=50 || dias>=382)
    {
        printf("Capric�rnio\n");
    }
    else if(dias>=51 && dias<=79)
    {
        printf("Aqu�rio\n");
    }
    else if(dias>=80 && dias<=110)
    {
        printf("Peixes\n");
    }
    else if(dias>=111 && dias<=140)
    {
        printf("�ries\n");
    }
    else if(dias>=141 && dias<=170)
    {
        printf("Touro\n");
    }
    else if(dias>=171 && dias<=200)
    {
        printf("G�meos\n");
    }
    else if(dias>=201 && dias<=231)
    {
        printf("C�ncer\n");
    }
    else if(dias>=232 && dias<=262)
    {
        printf("Le�o\n");
    }
    else if(dias>=263 && dias<=292)
    {
        printf("Virgem\n");
    }
    else if(dias>=293 && dias<=322)
    {
        printf("Libra\n");
    }
    else if(dias>=323 && dias<=351)
    {
        printf("Escorpi�o\n");
    }
    else if(dias>=352 && dias<=381)
    {
        printf("S�gitario\n");
    }

    system("pause");
    return(0);
}
