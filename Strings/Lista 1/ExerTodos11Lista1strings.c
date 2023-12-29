#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    int opcao;

    do
    {
        system("cls");
        //
            printf("Strings.\n");
            printf("1 - Lê nome, imprime a, conta o.\n");
            printf("2 - Senha.\n");
            printf("3 - Contar vogais.\n");
            printf("4 - Verifica o que é vogal.\n");
            printf("5 - Imprimer caracteres em posição par, impares, primeiro e último.\n");
            printf("6 - Lê string, calcula e mostra quantos caracteres possui.\n");
            printf("7 - Ler texto e imprimir invertido.\n");
            printf("8 - Ler uma frase e imprime palavras na vertical.\n");
            printf("9 - Ler texto, mostrar.\n");
            printf("10 - Ler palavra e verificar se é palindromo.\n");
            printf("11 - Ler string, ler caractere, pesquisar se está na string.\n");
            printf("Digite a opção desejada: ");
            scanf("%d",&opcao);

            switch(opcao)
            {
                case 1:
                {
                    char nome[101];
                    int retorno;

                    do
                    {
                        printf("Informe um nome: ");
                        gets(nome);
                        retorno = verificaCaractere(nome, 'a');
                        if(nome[0]!='0')
                        {
                            if(retorno!=-1)
                            {
                                mostrarString(nome);
                                printf("\n");
                            }
                            else
                            {
                                retorno = contaCaractereString(nome, 'o');
                                printf("%s possui %d letras o\n",nome, retorno);
                            }
                        }
                    }while(nome[0]!='0');

                    break;
                }
                case 2:
                {
                    char senha[7];
                    char tentativa[7];
                    int retorno;
                    int cont;

                    cont=0;

                    printf("Informe qual será a senha: ");
                    fflush(stdin);
                    gets(senha);

                    do
                    {

                        printf("Informe a senha para entrar (máximo de 3 tentativas): ");
                        gets(tentativa);
                        retorno = comparaString(senha, tentativa);
                        if(retorno==1)
                        {
                            cont++;
                            if(cont==3)
                            {
                                printf("Senha informada está incorreta, limite atingido.\n");
                                printf("Tente novamente mais tarde.\n");
                                retorno=0;
                            }
                        }
                        else
                        {
                            printf("Senha correta em menos de três tentativas.\nBem vindo(a)");
                        }
                    }while(retorno==1);
                    break;
                }
                case 3:
                {
                    char texto[101];
                    int retorno;
                    int i;

                    printf("Digite palavras: ");
                    gets(texto);
                    printf("Vogal\tQuantidade");
                    printf("======================\n");
                    printf("A/a\t");
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
                    printf("%d\n",retorno);
                    printf("\n\n");
                    contaVogaisString(texto);
                    break;
                }
                case 4:
                {
                    char texto[51];
                    int i;
                    int j=0;
                    int retorno;

                    printf("Digite um texto: ");
                    fflush(stdin);
                    gets(texto);
                    i = contaQtdeVogaisString(texto);

                    char vogais[i+1];
                    i=0;
                    while(texto[i] != '\0')
                    {
                        retorno = verificaVogal(texto,i);

                        if(retorno == 1 || retorno == 2 ||retorno == 3|| retorno == 4 ||retorno == 5)
                        {

                            vogais[j] = retorno;
                            j++;
                        }
                        i++;
                    }
                    vogais[j]= '\0';
                    i=0;
                    while(vogais[i] != '\0')
                    {
                        printf("%d ",vogais[i]);
                        i++;
                    }

                    break;
                }
                case 5:
                {
                    char texto[201];
                    int i=0;
                    int j=0;
                    char palavra[201];

                    printf("Informe uma string de até 200 caracteres: ");
                    fflush(stdin);
                    gets(texto);//scanf("%[^\n]s,texto);
                    printf("\nCaracteres no índice par.\n");

                    while(texto[i]!= '\0')//NULL
                    {
                        //
                        if(i % 2==0)
                        {
                            printf("%c",texto[i]);
                        }
                        i++;
                    }

                    printf("\nCaracteres no índice ímpar.\n");

                    i=0;

                    while(texto[i]!= '\0')//NULL
                    {
                        //
                        if(i % 2!=0)
                        {
                            printf("%c",texto[i]);
                        }
                        i++;
                    }

                    printf("\nPrimeiro caractere de cada palavra\n");
                    i=0;

                    if(texto[0] != ' ')
                    {
                        printf("%c ",texto[0]);
                    }

                    while(texto[i]!= '\0')
                    {
                        if(texto[i] == ' ' && (texto[i+1] != ' ' && texto[i+1] != '\0'))
                        {
                            printf("%c ",texto[i+1]);
                        }
                        i++;
                    }
                    printf("\nÚltimo caractere de cada palavra\n");
                    i=0;
                    while(texto[i]!= '\0')
                    {
                        if(texto[i] != ' ' && (texto[i+1] == ' ' || texto[i+1] == '\0'))
                        {
                            printf("%c ", texto[i]);
                        }
                        i++;
                    }
                    printf("\nPrimera palavra do texto\n");
                    i=0;
                    while(texto[i] == ' ')//deslocar o i até o primeiro caractere
                    {                     //diferente de espaço
                        i++;
                    }

                    while(texto[i]!= ' ' && texto[i] != '\0')
                    {
                        palavra[j] = texto[i];
                        j++;
                        i++;
                    }

                    palavra[i] = '\0';
                    i=0;
                    while(palavra[i]!= '\0')
                    {
                        printf("%c",palavra[i]);
                        i++;
                    }
                    printf("\n%s",palavra);
                    break;
                }
                case 6:
                {
                    char texto[51];
                    int retorno;

                    printf("Digite um texto para contar: ");
                    fflush(stdin);
                    gets(texto);
                    retorno = contaString(texto);
                    printf("%d\n",retorno);
                    retorno = contaCaractereStringSemEspaco(texto);
                    printf("%d\n",retorno);

                    break;
                }
                case 7:
                {
                    char texto[201];
                    int retorno;

                    printf("Digite um texto para inversão: ");
                    fflush(stdin);
                    gets(texto);
                    mostrarString(texto);
                    printf("\n");

                    retorno = contaString(texto);
                    char invertido[retorno];

                    inverteString(texto, invertido, retorno);
                    mostrarString(invertido);

                    break;
                }
                case 8:
                {
                    char texto[201];

                    printf("Digite uma frase: ");
                    fflush(stdin);
                    gets(texto);

                    imprimePalavraPorLinha(texto);

                    break;
                }
                case 9:
                {
                    char texto[201];
                    char aux[201];
                    int i=0;

                    printf("Digite uma frase: ");
                    fflush(stdin);
                    gets(aux);
                    while(aux[i]!=' ')
                    {
                        texto[i] = aux[i];

                        i++;
                    }
                    texto[i] = '\0';
                    mostrarString(texto);

                    break;
                }
                case 10:
                {
                    char texto[201]={0};
                    char aux[201]={0};
                    char aux2[201]={0};
                    int i=0;
                    int p=0;
                    printf("Digite uma palavra: ");
                    fflush(stdin);
                    gets(texto);
                    inverteString(texto,aux,201);
                    mostrarString(texto);
                    printf("\n");
                    mostrarString(aux);
                    while(texto[i]!= '\0')
                    {
                        if(texto[i]==aux[i])
                        {
                            p++;
                        }
                        i++;
                    }

                    if(p==i)
                    {
                        printf("\nA palavra é um palindromo.");
                    }
                    else
                    {
                        printf("\nA palavra não é um palindromo.");
                    }
                    testePalindromoString(texto, aux, aux2,201);
                    break;
                }
                case 11:
                {
                    char texto[201];
                    printf("Digite uma palavra e uma letra separados por espaço: ");
                    fflush(stdin);
                    gets(texto);
                    int i=0;
                    int j=0;
                    int aux=0;
                    while(texto[i]!=' ')
                    {
                        i++;
                    }

                    while(texto[j]!='\0')
                    {
                        if(texto[j]==texto[i+1])
                        {
                            aux++;
                        }
                        j++;
                    }

                    if(aux>0)
                    {
                        printf("\nO caractere está contido na string.");
                    }
                    else
                    {
                        printf("\nO caractere não está contida na string. ");
                    }
                    break;
                }
                default:
                {
                    printf("Opção inválida, tente novamente.\n");
                }
            }

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
