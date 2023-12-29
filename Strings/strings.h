#include <stdio.h>
#include <stdlib.h>
//contar quantos caracteres uma string possui
int contaString(char texto[])
{
    int i=0;

    while(texto[i] != '\0')
    {
        //
        i++;
    }
    return(i);
    //for(;texto[i] != '\0';)    for(i=0;texto[i] != '\0';i++)
    //{                          {
    //     i++;                        ;
    //}                          }
}

//verificar se um determinado caractere está na string
//retorna -1 se não está ou o índice da primeira ocorrência
int verificaCaractere(char texto[], char caractere)
{
    int i=0;

    while(texto[i] != '\0')
    {
        //
        if(texto[i]==caractere)
        {
            return(i);//primeiro return finaliza a função, while, for
        }

        i++;
    }
    return(-1);
}

int verificaVogal(char texto[], int j)
{
    char caractere[5]={'a','e','i','o','u'};
    char vogal[5]={'A','E','I','O','U'};

            if(texto[j] != '\0')
            {
                    if(texto[j]==caractere[0]||texto[j]==vogal[0])
                    {
                        return(1);
                    }
                    else if(texto[j]==caractere[1]||texto[j]==vogal[1])
                    {
                        return(2);
                    }
                    else if(texto[j]==caractere[2]||texto[j]==vogal[2])
                    {
                        return(3);
                    }
                    else if(texto[j]==caractere[3]||texto[j]==vogal[3])
                    {
                        return(4);
                    }
                    else if(texto[j]==caractere[4]||texto[j]==vogal[4])
                    {
                        return(5);
                    }
            }
            return(0);
}

//gerar string sleatória
void gerarString(char texto[],int tamanho)
{
    int i=0;

    for(i=0;i<tamanho-1;i++)
    {//caracteres do 32 ao 255
        texto[i] = rand() % (255 - 32 +1) + 32;
    }
    texto[tamanho-1] = '\0';
}

void mostrarString(char texto[])
{
    int i=0;

    while(texto[i] != '\0')
    {
        printf("%c",texto[i]);
        i++;
    }
}

int contaCaractereString(char texto[],char caractere)
{
    int i=0;
    int cont=0;

    while(texto[i] != '\0')
    {
        if(texto[i]== caractere)
        {
            cont++;
        }
        i++;
    }
    return(cont);
}

int contaCaractereStringSemEspaco(char texto[])
{
    int i=0;
    int cont=0;

    while(texto[i] != '\0')
    {
        if(texto[i]!= ' ')
        {
            cont++;
        }
        i++;
    }
    return(cont);
}

void inverteString(char texto[], char invertido[], int tamanho)
{
    int i=0;
    invertido[tamanho] = '\0';
    tamanho = tamanho -1;
    while(texto[i]!= '\0')
    {
        invertido[tamanho] = texto[i];
        i++;
        tamanho--;
    }
}

void contaVogaisString(char texto[])
{
    int i=0;
    int j=0;
    int k=0;
    int cont;
    char caractere[5]={'a','e','i','o','u'};
    char vogal[5]={'A','E','I','O','U'};
    printf("Vogal\tQuantidade");
    printf("======================\n");

        while(i<5)
        {
            cont=0;
            j=0;
            printf("%c/%c\t",vogal[i],caractere[i]);
            while(texto[j] != '\0')
            {
                if(texto[j]== caractere[k] || texto[j]==vogal[k])
                {
                    cont++;
                }
                j++;
            }
            printf("%d\n",cont);
            k++;
            i++;
        }
        /*printf("A/a\t");
        retorno = contaCaractereString(texto,'a');
        printf("%d\n",retorno);
        printf("E/e\t");
        retorno = contaCaractereString(texto,'e');
        printf("%d\n",retorno);
        printf("I/i\t");
        retorno = contaCaractereString(texto,'i');
        printf("%d\n",retorno);
        printf("O/o\t");
        retorno = contaCaractereString(texto,'o');
        printf("%d\n",retorno);
        printf("U/u\t");
        retorno = contaCaractereString(texto,'u');
        printf("%d\n",retorno);*/

}

int contaQtdeVogaisString(char texto[])
{
    int i=0;
    int j=0;
    int k=0;
    int cont=0;
    char caractere[5]={'a','e','i','o','u'};
    char vogal[5]={'A','E','I','O','U'};

        while(i<5)
        {

            j=0;

            while(texto[j] != '\0')
            {
                if(texto[j]== caractere[k] || texto[j]==vogal[k])
                {
                    cont++;
                }
                j++;
            }
            k++;
            i++;
        }
        return(cont);
}

int comparaString(char texto[], char texto2[])
{
    int i=0;
    int cont=0;

    while(texto[i] != '\0')
    {
        if(texto[i]==texto2[i])
        {
            cont++;
        }
        i++;
    }
    //printf("%d\t%d", i, cont);
    if(cont==i)
    {
        return(0);
    }
    else
    {
        return(1);
    }
}

void imprimePalavraPorLinha(char texto[])
{
    int i=0;

    while(texto[i] == ' ')
    {
        i++;
    }
    while(texto[i] != '\0')
    {
        if(texto[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",texto[i]);
        }
    }
}
