/*10) Escreva um algoritmo que gere a s�rie de Fibonacci at� o termo 'n' que � informado
pelo usu�rio. A s�rie de Fibonacci � formada pela sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34,55, ... , etc.*/

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

    printf("Informe at� que termo da s�rie Fibonacci voc� quer ver: ");
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
