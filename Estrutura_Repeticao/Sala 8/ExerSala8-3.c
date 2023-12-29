/*3) Alice e Beto são amigos e sempre que
se encontram relembram os tempos de
infância tirando par-ou-ímpar para
decidir quem escolhe o filme a ser
assistido, ou qual o restaurante em que
vão almoçar, etc. Escreva um programa
para determinar que ganhou a série de
par-ou-ímpar.
Entrada
A primeira entrada deve ser um valor
que identifica a quantidade de jogos
realizados, identificada pela variável ‘n’.
A seguir deve-se ler os ‘n’ resultados
dos jogos. Se Ri = 0 significa que Alice
ganhou o i-ésimo jogo e se Ri = 1 Beto
ganhou o i-ésimo jogo.
Saída
O programa deve produzir uma linha na
saída, no formato ‘Alice ganhou X e Beto
ganhou Y jogos’.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, r, i;
    int contX=0, contY=0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe o nro de jogos que foram realizados: ");
            scanf("%d",&n);
        }while(n<=0);
        for(i=1;i<=n;i++)
        {
            do
            {
                printf("%dº. resultado de %d: ",i,n); //informar como no exemplo?
                scanf("%d",&r);
            }while(r!=0&&r!=1);

            if(r==0)
                {
                    contX++;

                }
                else
                {
                    contY++;
                }
        }

        printf("\n\nAlice ganhou %d e Beto ganhou %d jogos.",contX,contY);

        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
