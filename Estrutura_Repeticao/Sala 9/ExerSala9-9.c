/*9) Ler dados de pessoas: idade, curso e se reside em Pato Branco (variável char com resposta
s/S/n/N). Para curso a pessoa informará a letra inicial do curso, que é uma variável char.
Exemplos: A para Tecnologia em Análise e Desenvolvimento de Sistemas, C para Engenharia
de Computação e etc..
Validar a entrada para se reside em Pato Branco (deve ser informado um desses caracteres:
s/S/n/N).
Fazer a média de idade de alunos do curso de Tecnologia em Análise e Desenvolvimento de
Sistemas.
Contar quantos alunos residem em Pato Branco.
Encontrar a menor idade entre os alunos que não residem em Pato Branco.
Contar quantos alunos não cursam Tecnologia em Análise e Desenvolvimento de Sistemas.
Parar a leitura (entrada de dados) quando informado 0 ou valor negativo para a idade. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir, reside, curso, primeira = 'n';
    int idade, menorI, contNA=0, alunosA=0, contA=0, contR=0;
    float mediaI=0;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe a idade: ");
            scanf("%d",&idade);
            if(idade>0)
            {
                printf("Informe o curso(letra inicial): ");
                fflush(stdin);
                scanf("%c",&curso);
                do
                {
                    printf("Informe se reside em Pato Branco (s/S/n/N): ");
                    fflush(stdin);
                    scanf("%c",&reside);
                }while(reside!='s'&&reside!='S'&&reside!='n'&&reside!='N');
                if(curso=='A')
                {
                    alunosA = alunosA + idade;
                    contA++;
                }
                else
                {
                    contNA++;
                }
                if(reside=='s'||reside=='S')
                {
                    contR++;
                }
                else
                {
                    if(primeira=='n')
                    {
                        menorI = idade;
                        primeira = 's';
                    }

                    else
                    {
                        if(idade<menorI)
                        {
                            menorI = idade;
                        }
                    }
                }
            }
        }while(idade>0);

        if(contA>0)
        {
            mediaI = alunosA/(float)contA;
            printf("Media idade alunos analise: %.2f\n",mediaI);
        }
        printf("%d alunos residem em Pato Branco. \n",contR);
        printf("Menor idade entre os que não residem em Pato Branco e %d. \n",menorI);
        printf("%d alunos não cursam analise. \n",contNA);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%d",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
