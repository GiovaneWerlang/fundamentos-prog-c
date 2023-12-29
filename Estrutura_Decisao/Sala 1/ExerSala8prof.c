/*8) Faça um algoritmo que leia três notas de um aluno e calcule a média ponderada, com
os pesos: 1, 3 e 4, respectivamente. E:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5.9 informar que o aluno está em recuperação. Nesse
caso, ler a nota de recuperação e calcular a média final (que é a média entre a média
anual e a nota de recuperação).
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após
recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após
recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da
recuperação.*/

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
        printf("O aluno está aprovado\n");
    }
    else if ( media >=4 )
    {
            printf("Em recuperação\n");
            printf("Informe a nota de recuperação: ");
            scanf("%d",nota4);
            media = ((float)media + nota4)/2;
            if(media >= 5)
            {
                printf("O aluno está aprovado apos recuperação\n");
            }
            else
            {
                printf("O aluno está reprovado após recuperação\n");
            }
    }
    else
    {
        printf("Reprovado sem recuperação\n");
    }

    system("pause");
    return(0);
}

