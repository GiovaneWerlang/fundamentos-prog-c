/*6) Ler caracteres parar quando o usuário informar o caractere '0'.
Utilizando a tabela ASCII contar quantos caracteres são letras maiúsculas
e quantos são letras minúsculas.
Sugestão: utilizar o código numérico para comparar.
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
    printf("Nº de maiúsculas: %d\nNº de minúsculas: %d\n",maius,minus);

    system("pause");
    return(0);
}
