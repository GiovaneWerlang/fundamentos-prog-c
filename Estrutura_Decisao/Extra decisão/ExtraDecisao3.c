/*3) Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:
    a. "Telefonou para a v�tima?"
    b. "Esteve no local do crime?"
    c. "Mora perto da v�tima?"
    d. "Devia para a v�tima?"
    e. "J� trabalhou com a v�tima?" O programa deve no final emitir uma classifica��o sobre a
    participa��o da pessoa no crime. Se a pessoa responder positivamente a 2 quest�es ela deve ser
    classificada como "Suspeita", entre 3 e 4 como "C�mplice" e 5 como "Assassino".
    Caso contr�rio, ele ser� classificado como "Inocente". */

    #include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
        char SN;
        int val;
        val=0;

        printf("Voc� ser� interrrogado como suspeito do crime.\n");
        printf("Responda as perguntas.(s/S,n/N\n");
        printf("Voc� telefonou para a v�tima?\n");
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
        printf("Mora perto da v�tima?\n");
        fflush(stdin);
        scanf("%c",&SN);
        if(SN == 's' || SN == 'S')
        {
            val = val+1;
        }
        printf("Devia para a v�tima?\n");
        fflush(stdin);
        scanf("%c",&SN);
        if(SN == 's' || SN == 'S')
        {
            val = val+1;
        }
        printf("J� trabalhou com a v�tima?\n");
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
            printf("C�mplice.\n");
        }
        if(val==5)
        {
            printf("Assassino.\n");
        }
        system("pause");
        return(0);
    }
