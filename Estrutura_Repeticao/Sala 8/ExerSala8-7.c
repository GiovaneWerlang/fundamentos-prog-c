/*7) Fazer um programa que leia cinco
n�meros inteiros no intervalo entre 10
at� 20, inclusive. Validar a entrada.
Para cada n�mero exibir a sequ�ncia
dos pares de 2 at� o n�mero gerado e
a soma desses pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int num, n=1, soma;
    int i;

    do
    {
        system("cls");
        //
        do
        {
            do
            {
                printf("Informe um n�mero inteiro: ");
                scanf("%d",&num);
            }while(num<10||num>20);

            printf("%d===>  ",num);
            soma = 0;
            for(i=2;i<=num;i=i+2)
            {
                printf("%d  ",i);
                soma = soma + i;
            }

            printf("<=== Soma = %d\n",soma);

            n++;
        }while(n<6);
        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
