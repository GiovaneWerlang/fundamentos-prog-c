/*11) Ler um n�mero inteiro e determinar se o mesmo � primo. Um n�mero � primo
quando � divis�vel de maneira exata somente por 1 e por ele mesmo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int i;

    printf("Informe um n�mero inteiro: ");
    scanf("%d",&num);
    for(;num%num==0&&num%1==0&&num%3!=0&&num%2!=0;)
    {
        printf("O n�mero %d � primo.",num);
        break;
    }

    system("pause");
    return(0);
}
