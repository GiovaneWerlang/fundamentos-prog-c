/*8) Fa�a um algoritmo que leia tr�s notas de um aluno e calcule a m�dia ponderada, com
os pesos: 1, 3 e 4, respectivamente. E:
a) Se a m�dia obtida est� entre 6 a 10 informar que o aluno est� aprovado;
b) Se a m�dia obtida est� entre 4 e 5.9 informar que o aluno est� em recupera��o. Nesse
caso, ler a nota de recupera��o e calcular a m�dia final (que � a m�dia entre a m�dia
anual e a nota de recupera��o).
b.1) Se a m�dia final � menor que 5 informar que o aluno est� reprovado ap�s
recupera��o;
b.2) Se � igual ou maior que 5 informar que o aluno est� aprovado ap�s
recupera��o;
c) Se a m�dia obtida � menor que 4 informar que o aluno est� reprovado antes da
recupera��o.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nota1, nota2, nota3, nota4;
    float media;

    printf("Informe a primeira nota: ");
    scanf("%d",&nota1);
    printf("Informe a segunda nota: ");
    scanf("%d",&nota2);
    printf("Informe a terceira nota: ");
    scanf("%d",&nota3);

    media = (((float)nota1)+(3 * nota2)+ (4 * nota3))/ (1+3+4);

    if ( media >= 6 )
    {
        printf("O aluno est� aprovado\n");
    }
    else if ( media >=4 )
    {
            printf("Em recupera��o\n");
            printf("Informe a nota de recupera��o: ");
            scanf("%d",nota4);
            media = ((float)media + nota4)/2;
            if(media >= 5)
            {
                printf("O aluno est� aprovado apos recupera��o\n");
            }
            else
            {
                printf("O aluno est� reprovado ap�s recupera��o\n");
            }
    }
    else
    {
        printf("Reprovado sem recupera��o\n");
    }

    system("pause");
    return(0);
}

