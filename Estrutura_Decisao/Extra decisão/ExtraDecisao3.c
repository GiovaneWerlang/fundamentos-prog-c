/*3) Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
    a. "Telefonou para a vítima?"
    b. "Esteve no local do crime?"
    c. "Mora perto da vítima?"
    d. "Devia para a vítima?"
    e. "Já trabalhou com a vítima?" O programa deve no final emitir uma classificação sobre a
    participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser
    classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino".
    Caso contrário, ele será classificado como "Inocente". */

    #include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
        char SN;
        int val;
        val=0;

        printf("Você será interrrogado como suspeito do crime.\n");
        printf("Responda as perguntas.(s/S,n/N\n");
        printf("Você telefonou para a vítima?\n");
        scanf("%c",&SN);
        if(SN == 's' || SN == 'S')
        {
            val = val+1;
        }
        printf("Esteve no local do crime?\n");
        fflush(stdin);
        scanf("%c",&SN);
        if(SN == 's' || SN == 'S')
        {
            val = val+1;
        }
        printf("Mora perto da vítima?\n");
        fflush(stdin);
        scanf("%c",&SN);
        if(SN == 's' || SN == 'S')
        {
            val = val+1;
        }
        printf("Devia para a vítima?\n");
        fflush(stdin);
        scanf("%c",&SN);
        if(SN == 's' || SN == 'S')
        {
            val = val+1;
        }
        printf("Já trabalhou com a vítima?\n");
        fflush(stdin);
        scanf("%c",&SN);
        if(SN == 's' || SN == 'S')
        {
            val = val+1;
        }
        if(val<2)
        {
            printf("Inocente.\n");
        }
        if(val==2)
        {
            printf("Suspeito.\n");
        }
        if(val==3 || val==4)
        {
            printf("Cúmplice.\n");
        }
        if(val==5)
        {
            printf("Assassino.\n");
        }
        system("pause");
        return(0);
    }
