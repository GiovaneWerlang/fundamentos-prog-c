/*3) Ler um n�mero N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o valor
obtido da multiplica��o sucessiva de N por 2, enquanto o produto for menor que 250 (N*2; N*2*2; N*2*2*2; etc.).
O valor N dever� ser verificado quanto a sua validade.Caso o usu�rio informe um valor fora da faixa,
o programa dever� informar que o valor digitado n�o � v�lido e repetir a leitura.
Aten��o: o produto deve ser menor que 250.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, p, valor, produto;

    do
    {
        system("cls");

        do
        {
            printf("Informe um n�mero maior ou igual a 1 e menor ou igual a 50: ");
            scanf("%d",&n);
        }while(n<1||n>50);

        produto = n;

        for(p=2;produto<250;p++)
        {
            produto = produto * 2;
        }
        printf("Produto: %d",produto);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir == 's'|| repetir == 'S');

    system("pause");
    return(0);
}
