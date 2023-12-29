/*9) Ler um número que indica a quantidade de ímpares iniciando um que deve ser
mostrada. O valor informado para a quantidade deve ser positivo. Validar a entrada.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int qtdeM;
    int iniciar;
    int imp;
    int qtdeI=0;

    printf("Informe a quantidade: ");
    scanf("%d",&qtdeM);
    printf("Informe o número inicial: ");
    scanf("%d",&iniciar);
    imp = iniciar;

    do
    {
        do
        {
            if(imp%2!=0)
            {
                printf("%d\t",imp);
                qtdeI++;
                if(qtdeI%5==0)
                    {
                        printf("\n");
                    }
            }
            imp++;
        }while(qtdeI<qtdeM);

    }while(qtdeM<=0);

    printf("\n");

    system("pause");
    return(0);
}

