/*7) No intervalo entre 0 e 100, utilizando uma estrutura for para mostrar cada um dos itens
em listagens separadas. Colocar um cabe�alho/t�tulo que identifique cada uma das
listagens:
a) os valores desse intervalo em ordem decrescente.
b) os valores pares desse intervalo, sem utilizar if, apenas a vari�vel de
inicializac�o, controle e incremento/decremento do for.
c) os m�ltiplos de 10, em ordem crescente e sem utilizar if, apenas a vari�vel de
inicializac�o, controle e incremento/decremento do for.
d) os m�ltiplos de 5, em ordem decrescente e sem utilizar if, apenas a vari�vel de
inicializac�o, controle e incremento/decremento do for.*/

#include <stdio.h>
#include <stdlib.h> //ser� que � pra usar um �nico for para tudo, ou for dentro de for

int main(void)
{
    char repetir;
    int i, d, p, cinco, dez;
    do
    {
        system("cls");


            printf("Valores em ordem decrescente: \n");
            for(d=100;d>=1;d--)
            {
                printf("%d\t",d);
            }
            printf("\nPares do intervalo: \n");
            for(p=2;p<=100;p=p+2)
            {
                printf("%d\t",p);
            }
            printf("\nM�ltiplos de 10: \n");
            for(dez=10;dez<=100;dez= dez+10)
            {
                printf("%d\t",dez);
            }
            printf("\nM�ltiplos de 5: \n");
            for(cinco=100;cinco>=5;cinco = cinco-5)
            {
                printf("%d\t",cinco);
            }
            printf("\n");

        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
