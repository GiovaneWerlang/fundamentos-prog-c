/*6) Fazer um programa para: Mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para os
números compreendidos entre o valor ‘x’informado   pelo   usuário   e   ‘x+10’,inclusive.
Validar   a   entrada,   o   usuário deverá fornecer um número positivo entre 2 e 100.
Ao final mostrar a maior quantidade de divisores. A figura ao lado exemplifica a execução,
utilizá-la como modelo para o programa implementado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int i, j;
    int x;
    int qtdeDivisores;
    int maiorQtdeDivisores;//armazenar a maior quantidade de divisores
    int numeroMaiorQtdeDivisores;


    do
    {
        system("cls");
        maiorQtdeDivisores=0;

        do //validar entrada. Queremos um valor entre 2 e 100
        {
            printf("Informe um valor entre 2 e 100\n");
            scanf("%d",&x);
        }while(x < 2 || x > 100);

        for(i=x;i <= (x+10); i++ )
        {
            qtdeDivisores = 2; //1 e o próprio número
            printf("%d - 1,  ",i);
            for(j=2; j<=i/2; j++)
            {
                if(i % j == 0)
                {
                    printf("%d,  ",j);
                    qtdeDivisores++;
                }
            }
            printf("%d.  Divisores: %d\n",i,qtdeDivisores);
            if(qtdeDivisores > maiorQtdeDivisores)
            {
                maiorQtdeDivisores = qtdeDivisores;
                numeroMaiorQtdeDivisores = i;
            }
        }
        printf("\n\nA maior quantidade de divisores é %d e pertence ao número %d\n",maiorQtdeDivisores,numeroMaiorQtdeDivisores);
        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='S'||repetir=='s');
    system("pause");
    return(0);
}
