/*1) Fazer um programa que verifique se um caractere informado é letra (A...Z ou a...z),
dígito (0...9) ou outro caractere. Dica: utilize a tabela ASCII que é facilmente encontrada
em uma busca no Google. Nessa tabela, por exemplo: a = 97, b = 98, A= 65, B= 66...
Exemplos:   Informado   Mensagem de saída
A   é letra
9   é dígito
#   é outro caractere*/

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
        printf("%c é dígito\n",caractere);
    }
    else if((caractere>=65 && caractere<=90) || (caractere>=97 && caractere<=122))
    {
        printf("%c é letra\n",caractere);
    }
    else
    {
        printf("%c é outro caractere\n",caractere);
    }


    system("pause");
    return(0);
}
