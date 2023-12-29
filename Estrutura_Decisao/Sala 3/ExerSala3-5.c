/*5) Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine
o seu signo conforme a tabela a seguir:

Intervalo           Signo
de 22/12 até 20/1   Capricórnio
de 21/1 até 19/2    Aquário
de 20/2 até 20/3    Peixes
de 21/3 até 20/4    Áries
de 21/4 até 20/5    Touro
de 21/5 até 20/6    Gêmeos
de 21/6 até 21/7    Câncer
de 22/7 até 22/8    Leão
de 23/8 até 22/9    Virgem
de 23/9 até 22/10   Libra
de 23/10 até 21/11  Escorpião
de 22/11 até 21/12  Sagitário

Se informada uma data que não corresponde aos intervalos indicados, informar
que a data é inválida.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int diaN, mesN,dias;

    printf("Informe o dia e mês de seu nascimento\nno formato 22/2\n");
    scanf("%d/%d",&diaN,&mesN);

    dias = (mesN * 30) + diaN;
    if(dias<=0 || dias>390)
    {
        printf("Data inválida\n");
    }
    else if(dias<=50 || dias>=382)
    {
        printf("Capricórnio\n");
    }
    else if(dias>=51 && dias<=79)
    {
        printf("Aquário\n");
    }
    else if(dias>=80 && dias<=110)
    {
        printf("Peixes\n");
    }
    else if(dias>=111 && dias<=140)
    {
        printf("Áries\n");
    }
    else if(dias>=141 && dias<=170)
    {
        printf("Touro\n");
    }
    else if(dias>=171 && dias<=200)
    {
        printf("Gêmeos\n");
    }
    else if(dias>=201 && dias<=231)
    {
        printf("Câncer\n");
    }
    else if(dias>=232 && dias<=262)
    {
        printf("Leão\n");
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
        printf("Escorpião\n");
    }
    else if(dias>=352 && dias<=381)
    {
        printf("Ságitario\n");
    }

    system("pause");
    return(0);
}
