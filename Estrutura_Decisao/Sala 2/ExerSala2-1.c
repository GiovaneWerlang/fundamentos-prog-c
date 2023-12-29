/*1) Ler três valores inteiros, encontrar e mostrar o menor deles. Deve ser criada uma
variável para armazenar o menor valor informado. Observação: no algoritmo deverá
existir apenas uma instrução printf para apresentar o menor valor e no formato:
printf(“menor entre %d,  %d e %d é %d”, num1, num2, num3, menor);*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3;
    int menor;

    printf("Informe o primeiro número: ");
    scanf("%d",&num1);
    printf("Informe o segundo número: ");
    scanf("%d",&num2);
    printf("Informe o terceiro número: ");
    scanf("%d",&num3);

    if(num1 < num2 && num1 < num3)
        {
            menor = num1;
        }
    else if(num2 < num1 && num2 < num3)
        {
            menor = num2;
        }
    else
        {
            menor = num3;
        }

    printf("O menor entre %d,  %d e %d é %d\n", num1, num2, num3, menor);



    system("pause");
    return(0);
}
