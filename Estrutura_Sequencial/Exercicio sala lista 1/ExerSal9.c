/*9) Ler dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma
que a variável A passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo
das variáveis antes e depois da troca. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int a, b;
    int valA, valB;
    //entrada
    printf("Defina o valor de A: "); //nao seria necessario inserir valores
    scanf("%d",&valA);
    printf("Defina o valor de B: ");
    scanf("%d",&valB);
    //processamento
    a=valA;
    b=valB;
    printf("%d %d\n",a,b);
    if(a!=b) {
        a=valB;
        b=valA;
    }
    //saida
    printf("%d %d",a,b);
}
