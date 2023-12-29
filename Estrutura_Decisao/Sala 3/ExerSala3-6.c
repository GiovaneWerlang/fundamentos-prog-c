/*6) Um ano é bissexto se for divisível por 4 e não for divisível por 100.
Também são bissextos os anos divisíveis por 400. Escreva um algoritmo que
determina se um ano informado pelo usuário é bissexto.
Observação: atenção para a prioridade dos operadores
(operador && tem prioridade maisalta que o operador || ),
utilizar parênteses, se necessário, para alterar essa ordem deprioridade.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ano;

    printf("Informe um ano: ");
    scanf("%d",&ano);

    if((ano % 4==0 && ano%100 !=0)||(ano % 400==0))
    {
        printf("O ano informado é bissexto\n");
    }
    else
    {
        printf("O ano informado não é bissexto\n");
    }


    system("pause");
    return(0);
}
