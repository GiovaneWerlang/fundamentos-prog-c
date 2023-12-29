/*1) Ler dois n�meros que representam os limites de um intervalo. Mostrar os pares e divis�veis
por tr�s desse intervalo, em ordem decrescente e em colunas ('n' n�meros por linha separados
por tabula��o). 'n' � informado pelo usu�rio e deve ser validado para obter uma entrada
positiva. Calcular e mostrar a m�dia dos �mpares e n�o divis�veis por 5 desse intervalo.
Validar para que n�o seja realizada uma divis�o por zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int limiteInf, limiteSup,i;
    int pares=0,contP, coluna=0, impar=0, contI=0;
    float media=0;

    do
    {
        system("cls");

        do
        {
            printf("Informe um limite: ");
            scanf("%d",&limiteInf);
        }while(limiteInf<=0);
        do
        {
            printf("Informe um limite maior que %d: ",limiteInf);
            scanf("%d",&limiteSup);
        }while(limiteSup<limiteInf);
        do
        {
            printf("Informe o n�mero de items por coluna: ");
            scanf("%d",&coluna);
        }while(coluna<=0);

        for(i=limiteSup;i>=limiteInf;i--)
        {
            if(i%2==0&&i%3==0)
            {
                printf("%d\t",i);
                contP++;
                if(contP%coluna==0)//existe na primeira e ultima linha quantidade diferente do que o n de colunas
                {
                    printf("\n");
                }
            }
            if(i%2!=0&&i%5!=0)
            {
                impar = impar + i;
                contI++;

            }
        }
        if(contI>0)
        {
            media=impar/(float)contI;
            printf("\nMedia dos impares n�o divis�veis por 5 �: %.2f\n",media);
        }
        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
