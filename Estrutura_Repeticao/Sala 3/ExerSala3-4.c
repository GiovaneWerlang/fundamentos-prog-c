/*4) Leia dos valores que representam os limites de um intervalo. O usuário pode informar
os valores em ordem crescente ou decrescente. Mostrar os divisíveis por x e não
divisíveis por y nesse intervalo. X e y são variáveis informadas pelo usuário.
Exemplo:
Informados: 5 e 15 como limites e 2 para x e 3 para y.
Mostrar os divisíveis por 2 e não divisíveis por 3 entre 5 e 15:
2   4   6   8   10  14*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, y, limiteInf,limiteSup;
    int i;

    printf("Informe um valor para limite do intervalo: ");
    scanf("%d",&limiteInf);
    printf("Informe outro valor para limite do intervalo: ");
    scanf("%d",&limiteSup);
    printf("Informe um valor para x: ");
    scanf("%d",&x);
    printf("Informe um valor para y: ");
    scanf("%d",&y);

    if(limiteSup<limiteInf)
    {
        i = limiteInf;
        limiteInf = limiteSup;
        limiteSup = i;
    }

    for(i=limiteInf; i<=limiteSup; i++)
    {
        if(i%x==0&&i%y!=0)
        {
            printf("%d\t",i);
        }
    }

    system("pause");
    return(0);
}
