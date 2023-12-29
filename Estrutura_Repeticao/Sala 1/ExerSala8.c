/*8) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para
vagas em uma empresa. Considerando que para cada candidato a empresa tenha obtido as
seguintes informações:
. idade
. nacionalidade (B ou E)
. possui curso superior (S ou N)
Faça um programa para determinar:
a)a quantidade de brasileiros;
b)a quantidade de estrangeiros;
c)a idade média dos brasileiros sem curso superior;
d)a menor idade entre os estrangeiros com curso superior;
Estabelecer uma condição para finalizar a entrada de dados do programa. Por
exemplo, idade negativa. Se idade negativa não ler as informações de nacionalidade e se
possui curso superior.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade=1;
    char nac;
    char superior;
    int qtdeBras=0;
    int qtdeEstrangeiros=0;
    int maiorIdade=-2;
    int qtdeIdade=0;
    int somaIdade=0;
    float media;

    while(idade>=0)
    {
        printf("Informe a idade: ");
        scanf("%d",&idade);
        //fflush(stdin);
        if(idade>= 0) //podemos processar
        {
            printf("Nacionalidade (b/B/E/e): ");
            fflush(stdin); //__fpurge(stdin; linux // stdio_ext.h
            scanf("%c",&nac);
            printf("Possui curso superio (s/S/n/N): ");
            fflush(stdin);
            scanf("%d",&superior);
            fflush(stdin);
            if(nac == 'b'|| nac == 'B')
            {
                qtdeBras++;
                if(superior == 'n' || superior == 'N')
                {
                    somaIdade = somaIdade + idade;
                    qtdeIdade++;
                }
            }
            else //estrangeiro
            {
                qtdeEstrangeiros++;
                if(superior == 's' || superior == 'S')
                {
                    if(idade > maiorIdade)
                    {
                        maiorIdade = idade;
                    }
                }
            }
        }
    } // fim while
    printf("Total de brasileiros: %d e de estrangeiros: %d\n",qtdeBras,qtdeEstrangeiros);
    if(maiorIdade != -2)
    {
        printf("Maior idade de estrangeiro com curso superior: %d\n",maiorIdade);
    }
    if(qtdeIdade != 0)
    {
        media = (float) somaIdade / qtdeIdade;
        printf("\nMédia de idade: %.2f\n",media);  //%5d para espaços, se digitar 1 fica 4 espaços e 1 número
    }
    system("pause");
    return(0);
}
