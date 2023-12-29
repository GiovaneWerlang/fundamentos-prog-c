/*1) Fazer um programa que verifique se um caractere informado � letra (A...Z ou a...z),
d�gito (0...9) ou outro caractere. Dica: utilize a tabela ASCII que � facilmente encontrada
em uma busca no Google. Nessa tabela, por exemplo: a = 97, b = 98, A= 65, B= 66...
Exemplos:   Informado   Mensagem de sa�da
A   � letra
9   � d�gito
#   � outro caractere*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char caractere;

    printf("Informe um caractere: (formato (a,A,$)");
    scanf("%c",&caractere);
    fflush(stdin);

    if(caractere>=48 && caractere <=57)
    {
        printf("%c � d�gito\n",caractere);
    }
    else if((caractere>=65 && caractere<=90) || (caractere>=97 && caractere<=122))
    {
        printf("%c � letra\n",caractere);
    }
    else
    {
        printf("%c � outro caractere\n",caractere);
    }


    system("pause");
    return(0);
}
