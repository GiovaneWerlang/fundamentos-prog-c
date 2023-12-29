/*5) Ler o nome de 5 pessoas e armazená-los em uma matriz.
Mostrar os nomes armazenados que iniciam com vogal e em seguida os nomes nos índices ímpares.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    char repetir;
    char nomes[5][101];
    int i;
    int j;
    char primeiraPalavra[5][101];

    do
    {
        system("cls");
        //
            for(i=0;i<5;i++)//i aponta para a linha
            {
                printf("Informe o %d. nome: ", i+1);
                gets(nomes[i]);
            }
            for(i=0;i<5;i++)
            {
                j=0;
                while(nomes[i][j] == ' ')
                {
                    j++;
                }
                while(nomes[i][j]!= ' '&& nomes[i][j] != '\0')
                {
                    primeiraPalavra[i][j] = nomes[i][j];
                    j++;
                }
                primeiraPalavra[i][j] = '\0';
                if(nomes[i][0]=='A' || nomes[i][0]=='E' || nomes[i][0]=='I' || nomes[i][0]=='O' || nomes[i][0]=='U' || nomes[i][0]=='a' || nomes[i][0]=='e' || nomes[i][0]=='i' || nomes[i][0]=='o' || nomes[i][0]=='u')
                {
                    printf("%s\n",nomes[i]);
                }
            }

            printf("\n\nPrimeira palavra\n");
            for(i=0;i<5;i++)
            {
                printf("%s\n",primeiraPalavra[i]);
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
