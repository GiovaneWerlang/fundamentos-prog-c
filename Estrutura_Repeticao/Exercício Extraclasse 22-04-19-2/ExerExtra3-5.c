/*5) Fazer um programa que leia um número de até 3 algarismos e inverta a ordem dos
algarismos desse número. Validar a entrada. Mostrar o número invertido.
Por exemplo:
Fornecido o número 103 e o programa mostrará o número 301.
Desafio: ler um valor qualquer tamanho e invertê-lo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=0, d1,d2,d3;

    do{
        printf("Informe um número de até 3 algarismos: ");
        scanf("%d",&num);

        if(num<1000)
        {
            d1= num%10;
            d2= ((num%100) - d1) /10;
            d3= num/100;

        }
        else
        {
            printf("Número inválido.");
        }

    }while(num==0);

    printf("%d%d%d\n",d1,d2,d3);


    system("pause");
    return(0);
}
