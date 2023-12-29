/*11) Ler um número inteiro e determinar se o mesmo é primo. Um número é primo
quando é divisível de maneira exata somente por 1 e por ele mesmo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;

    printf("Informe um número inteiro: ");
    scanf("%d",&num);
    for(;num%num==0&&num%1==0&&num%3!=0&&num%2!=0;)
    {
        printf("O número %d é primo.",num);
        break;
    }

    system("pause");
    return(0);
}
