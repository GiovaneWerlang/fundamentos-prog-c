/*4) Ler um valor entre 10 e 30. Validar a entrada, ou seja, permanecer em execução até
que o usuário informe um valor entre 10 e 30. Esse valor indica a quantidade de números
ímpares e divisíveis por 7, iniciando em 1, que devem ser mostrados. Fazer a média dos
números pares desse intervalo. Validar para que não seja efetuada uma divisão por zero
no momento de fazer a média. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valor, contP=0,contD=0;
    float media=0;
    int i=1;

    do
    {
        printf("Informe um valor entre 10 e 30:");
        scanf("%d",&valor);
    }while(valor<10||valor>30);

    do
    {
        if(i%2!=0&&i%7==0)
        {
            printf("%d\t",i);
            contD++;
            if(contD%5==0)
            {
                printf("\n");
            }
        }
        if(i%2==0)
        {
            media = media + i;
            contP++;
        }
        i++;

    }while(contD<valor);

    if(contP>0)
    {
        media = media/(float)contP;
        printf("\nA media dos pares deste intervalo é: %.2f\n",media);
    }

    system("pause");
    return(0);
}
