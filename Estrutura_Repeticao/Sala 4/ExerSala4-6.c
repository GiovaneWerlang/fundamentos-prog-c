/*6) Ler caracteres parar quando o usu�rio informar o caractere '0'.
Utilizando a tabela ASCII contar quantos caracteres s�o letras mai�sculas
e quantos s�o letras min�sculas.
Sugest�o: utilizar o c�digo num�rico para comparar.
Exemplo: A equivale a 65, B a 66...*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char carac='1';
    int maius=0, minus=0;

    while(carac!='0')
    {
        printf("Informe um caractere: (0 para sair)");
        scanf("%c",&carac);
        fflush(stdin);
        if(carac>=65&&carac<=90)
        {
            maius++;
        }
        else if(carac>=97&&carac<=122)
        {
            minus++;
        }
    }
    printf("N� de mai�sculas: %d\nN� de min�sculas: %d\n",maius,minus);

    system("pause");
    return(0);
}
