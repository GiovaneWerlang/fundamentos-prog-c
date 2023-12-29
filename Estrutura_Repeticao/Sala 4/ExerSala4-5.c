/*5) Ler um caractere que deve ser 'A' , 'B' ou  'C'. Parar a leitura quando o usuário informar
um desses três caracteres. Contar quantas tentativas foram feitas, ou seja, quantos
caracteres foram informados incorretos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char caractere='e';
    int invalido=0;

    while(caractere!='A'&&caractere!='B'&&caractere!='C')
    {
            printf("Informe um caractere (A/B/C para sair: )");
            scanf("%c",&caractere);
            fflush(stdin);

            if(caractere!='A'&&caractere!='B'&&caractere!='C')
            {
                invalido++;
            }

    }

    printf("Número de tentativas feitas: %d\n",invalido);


    system("pause");
    return(0);
}
