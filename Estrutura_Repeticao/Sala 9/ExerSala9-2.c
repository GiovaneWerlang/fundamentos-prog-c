/*2) Ler dois números que representam os limites de um intervalo. Validar a entrada, o usuário
deverá fornecer valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os primos desse intervalo, com cinco números por linha.
b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja feita
uma divisão por zero. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int limiteInf, limiteSup, i, p, qtde=0, linha=0, mult=0, contM=0;
    float media=0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um limite: ");
            scanf("%d",&limiteInf);
        }while(limiteInf<=0);

        do
        {
            printf("Informe um limite maior que %d: ",limiteInf);
            scanf("%d",&limiteSup);
        }while(limiteSup<=limiteInf);

        for(i=limiteInf;i<=limiteSup;i++)
        {
            qtde=0;
            for(p=2;p<=i/2;p++)
            {
                if(i%p==0)
                {
                    qtde++;
                    p=i;
                }
                /*if(qtde==0)
                {
                    printf("%d\t",i);
                    linha++;
                    if(i%3==0&&i%7==0)
                    {
                        mult = mult + i;
                        contM++;
                    }
                    if(linha%5==0)
                    {
                        printf("\n");
                    }
                }*/
            }
            if(qtde==0)
            {
                printf("%d\t",i);
                linha++;
                if(i%3==0&&i%7==0)
                    {
                        mult = mult + i;
                        contM++;
                    }
                    if(linha%5==0)
                    {
                        printf("\n");
                    }
            }
        }

        if(contM>0)
        {
            media = mult / (float)contM;
            printf("\nMedia: %.2f\n",media);
        }
        else
        {
            printf("\nNão há multiplos. \n");
        }
        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
