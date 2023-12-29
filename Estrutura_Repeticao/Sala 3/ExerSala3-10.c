/*10) Escreva um algoritmo que gere a série de Fibonacci até o termo 'n' que é informado
pelo usuário. A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34,55, ... , etc.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int i;
    int seg;
    int ant;
    int fib;
    fib = 0;
    seg = 0;
    ant = 1;

    printf("Informe até que termo da série Fibonacci você quer ver: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        fib = seg + ant;
        ant = seg;
        seg = fib;


        printf("%d\t",seg);

    }
    printf("\n");
    system("pause");
    return(0);
}
