/*6) Um ano � bissexto se for divis�vel por 4 e n�o for divis�vel por 100.
Tamb�m s�o bissextos os anos divis�veis por 400. Escreva um algoritmo que
determina se um ano informado pelo usu�rio � bissexto.
Observa��o: aten��o para a prioridade dos operadores
(operador && tem prioridade maisalta que o operador || ),
utilizar par�nteses, se necess�rio, para alterar essa ordem deprioridade.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ano;

    printf("Informe um ano: ");
    scanf("%d",&ano);

    if((ano % 4==0 && ano%100 !=0)||(ano % 400==0))
    {
        printf("O ano informado � bissexto\n");
    }
    else
    {
        printf("O ano informado n�o � bissexto\n");
    }


    system("pause");
    return(0);
}
