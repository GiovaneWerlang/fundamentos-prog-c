/*Validar possíveis divisões por zero
1) Ler dois valores que representam os limites de um intervalo. Mostrar os números pares e
divisíveis por 3 desse intervalo em ordem crescente. O usuário pode informar os valores dos
limites do intervalo em ordem crescente ou decrescente. Apresentar 5 valores por linha.
Por exemplo: informados 300 e 2 como limites
Mostrar: 6, 12, 18, 24, 30
 36, 42, 48 …
 // esses valores são pares e divisíveis por 3 apresentados com cinco valores por linha*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int limiteInf, limiteSup, cont;
    int i;

    printf("Informe um limite: ");
    scanf("%d",&limiteInf);
    printf("Informe outro limite: ");
    scanf("%d",&limiteSup);

    if(limiteSup<limiteInf)
    {
        cont = limiteInf;
        limiteInf = limiteSup;
        limiteSup = cont;
    }

    cont=0;

    for(i=limiteInf;i<=limiteSup;i++)
    {
        if(i!=0)
        {
            if(i%2==0&&i%3==0)
            {
                printf("%d\t",i);
                cont++;
                if(cont%5==0)
                {
                    printf("\n");
                }
            }
        }
        else
        {
            printf("Valor inválido.");
            break;
        }
    }
    printf("\n");

    system("pause");
    return(0);
}
