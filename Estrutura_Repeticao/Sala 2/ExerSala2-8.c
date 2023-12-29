/*8) O que faz o algoritmo a seguir?
declare i , s como inteiro
s ← 1
repetir i = 0  até i < 5   passo 1
s ← s * i
fim-repetir
escreva s*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,s;
    s = 1;

    for(i=0;i<5;i++)
    {
        s = s * i;
    }
    printf("S é: %d",s);

    system("pause");
    return(0);
}


