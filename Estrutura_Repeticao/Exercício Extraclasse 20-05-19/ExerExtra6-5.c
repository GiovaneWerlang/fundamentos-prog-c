/*5) Apresentar os primos entre dois limites informados pelo usu�rio. Apresentar os primos de 1 ou 2
at� o n�mero do intervalo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int limiteInf, limiteSup, cont, div, primo;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe o limite inferior (valor positivo): ");
            scanf("%d",&limiteInf);
        }while(limiteInf<=0);

        do
        {
            printf("Informe o limite superior (maior que %d): ",limiteInf);
            scanf("%d",&limiteSup);
        }while(limiteSup<limiteInf);

        printf("Primos de um intervalo at� o n�mero\n");

        do
        {
            printf("%d = 1",limiteInf);
            div=1;
            cont=2;
            do
            {

                while(div<=cont/2)
                {
                    if(cont%div==0)
                    {
                        primo++;
                        div = cont;
                    }

                    div++;
                }
                if(primo==0)
                {
                    printf(" %d",cont);
                }
                cont++;
                primo = 0;
            }while(cont<=limiteInf);

            limiteInf++;
            printf("\n");
        }while(limiteInf<=limiteSup);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
