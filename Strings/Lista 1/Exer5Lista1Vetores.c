#include <stdio.h>
#include "strings.h"

int main(void)
{
    char texto[201];
    int i=0;
    char palavra[201];

    printf("Informe uma string de at� 200 caracteres: ");
    gets(texto);//scanf("%[^\n]s,texto);
    printf("\nCaracteres no �ndice par.\n");

    while(texto[i]!= '\0')//NULL
    {
        //
        if(i % 2==0)
        {
            printf("%c",texto[i]);
        }
        i++;
    }

    printf("\nCaracteres no �ndice �mpar.\n");

    i=0;

    while(texto[i]!= '\0')//NULL
    {
        //
        if(i % 2!=0)
        {
            printf("%c",texto[i]);
        }
        i++;
    }

    printf("\nPrimeiro caractere de cada palavra\n");
    i=0;

    if(texto[0] != ' ')
    {
        printf("%c ",texto[0]);
    }

    while(texto[i]!= '\0')
    {
        if(texto[i] == ' ' && (texto[i+1] != ' ' && texto[i+1] != '\0'))
        {
            printf("%c ",texto[i+1]);
        }
        i++;
    }
    printf("\n�ltimo caractere de cada palavra\n");
    i=0;
    while(texto[i]!= '\0')
    {
        if(texto[i] != ' ' && (texto[i+1] == ' ' || texto[i+1] == '\0'))
        {
            printf("%c ", texto[i]);
        }
        i++;
    }
    printf("\nPrimera palavra do texto\n");
    i=0;
    while(texto[i] == ' ')//deslocar o i at� o primeiro caractere
    {                     //diferente de espa�o
        i++;
    }
    int j=0;
    while(texto[i]!= ' ' && texto[i] != '\0')
    {
        palavra[j] = texto[i];
        j++;
        i++;
    }

    palavra[i] = '\0';
    i=0;
    while(palavra[i]!= '\0')
    {
        printf("%c",palavra[i]);
        i++;
    }
    printf("\n%s",palavra);
}
