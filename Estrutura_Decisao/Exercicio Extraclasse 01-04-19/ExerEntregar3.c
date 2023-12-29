/*3) Faca um algoritmo que leia o gênero, a idade e o tempo de trabalho de uma pessoa e
determine se ela pode se aposentar. Assuma que homens se aposentam com 45 anos de
trabalho ou idade superior a 70 anos e mulheres de aposentam com 40 anos de trabalho
ou idade superior a 65 anos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade, tempo;
    char genero;

    printf("Informe o genero: (no formato f/F/m/M) ");
    scanf("%c",&genero);
    printf("Informe a idade: ");
    scanf("%d",&idade);
    printf("Informe o tempo de trabalho em anos: ");
    scanf("%d",&tempo);

    if(genero == 'f' || genero =='F')
    {
        if(tempo>=40)
        {
            printf("Já pode se aposentar\n");
        }
        else if(idade>=65)
        {
            printf("Já pode se aposentar\n");
        }
        else
        {
            printf("Ainda não pode se aposentar\n");
            if(idade>65)
            {
                printf("Falta idade\n");
            }
            else if(tempo<40)
            {
                printf("Falta tempo\n");
            }
        }
    }
    else if(genero == 'm' || genero == 'M') //poderia confiar no usuaria e ser apenas else
    {
             {
        if(tempo>=45)
        {
            printf("Já pode se aposentar\n");
        }
        else if(idade>=70)
        {
            printf("Já pode se aposentar\n");
        }
        else
        {
            printf("Ainda não pode se aposentar\n");
            if(idade>70)
            {
                printf("Falta idade\n");
            }
            else if(tempo<45)
            {
                printf("Falta tempo\n");
            }
        }
    }
    }
    //poderia ter um else para caractere invalido



    system("pause");
    return(0);
}

