/*6) Ler caracteres. Contar quantas vogais min�sculas s�o informadas. O caractere zero ('0')
indica o final da leitura, ou seja, finalizar a leitura quando informado esse caractere.
Aten��o:
do
{
}while (caractere != '0');
Por que zero est� entre aspas simples? Deve ser assim.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char caractere = 'a';
    int cont=0;

    do{
        printf("Informe um caractere: ");
        scanf("%c",&caractere);
        fflush(stdin);
        if(caractere=='a'||caractere=='e'||caractere=='i'||caractere=='o'||caractere=='u')
        {
            cont++;
        }
    }while(caractere != '0');

    printf("N�mero de vogais informadas %d\n",cont);


    system("pause");
    return(0);
}
