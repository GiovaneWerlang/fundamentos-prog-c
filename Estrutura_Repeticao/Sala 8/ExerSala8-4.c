/*4) Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer a saída do
programa, da parte do fatorial, como mostrado na figura a seguir. Colocar o símbolo de
multiplicação somente entre dois números.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int i, j;
    int fat;
    int soma;
    int qtde;
    float media;//divisiveis por 3 e 5 do intervalo entre 1 e 12

    do
    {
        system("cls");
        soma = 0;
        qtde = 0;

        for(i=1;i<=12;i++)//percorrer o intervalo entre 1 e 12
        {
            fat = 1;
            printf("%d =>",i);
            for(j=i;j>1;j--)
            {
                printf("%d *",j);
                fat = fat * j;
            }
            printf(" 1 = %d\n",fat);
            if(i % 3 ==0&& i% 5 == 0)
            {
                soma = soma + i;
                qtde++;
            }
        }
        if(qtde>0)
        {
            media = (float)soma / qtde;
            printf("\nMédia: %.2f\n",media);
        }

        printf("\nExecutar novamente: ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir =='s'|| repetir == 'S');
    system("pause");
    return(0);
}
