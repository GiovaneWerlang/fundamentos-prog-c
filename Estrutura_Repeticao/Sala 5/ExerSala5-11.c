/*11)  Elaborar um programa que solicita a idade e se � profissional aut�nomo ou
funcion�rio, calcula e mostra:
a) o total de pessoas profissionais aut�nomos com menos de 18 anos;
b) a m�dia das idades das pessoas funcion�rios com mais de 18 anos.
O programa deve validar as entradas: permitir somente valores positivos para a
idade e A/a/F/f (aut�nomo ou funcion�rio) para o tipo de profissional.
O programa termina quando for informado um valor negativo para a idade, que
n�o deve ser considerado. Portanto, ao ser informado um valor negativo para a idade n�o
deve ser solicitado o tipo de profissional*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade, totalA=0, contF=0;
    char profissao;
    float media=0;

    do
    {
        printf("Informe a idade: (negativo para sair)");
        scanf("%d",&idade);
        if(idade>0)
        {
            do
            {
                fflush(stdin);
                printf("Informe se o profissional � autonomo ou funcion�rio:  (A/a/F/f)");
                scanf("%c",&profissao);
                if(profissao=='A'||profissao=='a'&&idade<18)
                {
                    totalA++;
                }
                else if(profissao=='F'||profissao=='f'&&idade>18)
                {
                    contF++;
                    media = media + idade;
                }

            }while(profissao!='A'&&profissao!='a'&&profissao!='F'&&profissao!='f');
        }
    }while(idade>=0);

    printf("Total de pessoas aut�nomas menores de 18: %d",totalA);

    if(contF>0)
    {
        media = media /contF;
        printf("Media das idades de funcion�rios maiores de 18 anos: %.2f",media);
    }

    system("pause");
    return(0);
}
