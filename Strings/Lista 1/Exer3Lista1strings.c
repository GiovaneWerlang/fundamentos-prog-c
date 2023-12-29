/*3) Ler uma string, contar e exibir a quantidade de cada uma das vogais existentes nessa
string. Armazenar essas quantidades em um vetor. É indispensável armazenar a
quantidade à medida que a string é percorrida
(algo   como   VetVogais[X]++   ouVetVogais[X] =  VetVogais[X] + 1). Portanto, o vetor que armazena a quantidade de
vogais deve ser inicializado com zero antes de ser utilizado. Mostrar os resultados da seguinte forma.
Vogal        Quantidade
===================
A/a    5
E/e    0
I/i    1
O/o    2
U/u    0 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

int main(void)
{
    char repetir;
    char texto[101];
    int retorno;
    int i;

    do
    {
        system("cls");
        //
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

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}
