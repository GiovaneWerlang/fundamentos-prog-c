/*8) Apresentar os primos entre dois valores informados pelo usuário, com x valores por linha.
Validar as entradas. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int i, p, limiteInf, limiteSup,qtdeD, x, linha=0;

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
            printf("Informe o limite superio (maior que %d)",limiteInf);
            scanf("%d",&limiteSup);
        }while(limiteSup<=limiteInf);

        do
        {
            printf("Informe quantos valores por linha: ");
            scanf("%d",&x);
        }while(x<=0);

        for(i=limiteInf;i<=limiteSup;i++)
        {
            qtdeD =0;
            for(p=2;p<=i/2;p++)
            {
                if(i%p==0)
                {
                    qtdeD++;
                    p=i;
                }
            }
            if(qtdeD==0)
                    {
                        printf("%d\t",i);
                        linha++;
                        if(linha%x==0)
                        {
                            printf("\n");
                        }
                    }
        }
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
