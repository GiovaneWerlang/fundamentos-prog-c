/*5) Fazer um programa que leia um n�mero de at� 3 algarismos e inverta a ordem dos
algarismos desse n�mero. Validar a entrada. Mostrar o n�mero invertido.
Por exemplo:
Fornecido o n�mero 103 e o programa mostrar� o n�mero 301.
Desafio: ler um valor qualquer tamanho e invert�-lo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=0, d1,d2,d3;

    do{
        printf("Informe um n�mero de at� 3 algarismos: ");
        scanf("%d",&num);

        if(num<1000)
        {
            d1= num%10;
            d2= ((num%100) - d1) /10;
            d3= num/100;

        }
        else
        {
            printf("N�mero inv�lido.");
        }

    }while(num==0);

    printf("%d%d%d\n",d1,d2,d3);


    system("pause");
    return(0);
}
