/*7) Ler caracteres. Contar quantas letras min�sculas s�o informadas. O caractere zero ('0')
indica o final da leitura, ou seja, finalizar a leitura quando informado esse caractere.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char caractere;
    int minus=0, maius=0;

    do{
        printf("Informe um caractere: ");
        scanf("%c",&caractere);
        fflush(stdin);
        if(caractere!=0)
        {
            if(caractere>=65&&caractere<=90)
            {
                maius++;
            }
            if(caractere>=97 && caractere<=122)
            {
                minus++;
            }
        }

    }while(caractere!='0');

    printf("Letras min�sculas: %d\nLetras mai�sculas: %d\n",minus, maius);

    system("pause");
    return(0);
}
