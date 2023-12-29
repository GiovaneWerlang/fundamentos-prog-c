/*3) Ler três valores inteiros e colocá-los em ordem crescente. Os valores devem ser
apresentados com uma instrução:
printf(“Menor: %d  Meio: %d  Maior: %d\n”,menor,meio,maior);
Sugestão: dividir o problema em partes: encontrar o maior, o menor e o do meio
separadamente e armazenar os valores em variáveis.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3, menor, meio, maior;

    printf("Informe o primeiro número: ");
    scanf("%d",&num1);
    printf("Informe o segundo número: ");
    scanf("%d",&num2);
    printf("Informe o terceiro número: ");
    scanf("%d",&num3);

    //menor
    if ( num1 < num2 && num1 < num3)
        {
            menor = num1;
        }
    else if ( num2 <= num3)
        {
            menor = num2;
        }
    else
        {
            menor = num3;
        }
    //maior
    if ( num1 > num2 && num1 > num3)
        {
            maior = num1;
        }
    else if ( num2 >= num3)
        {
            maior = num2;
        }
    else
        {
            maior = num3;
        }
    //meio
    if (num1 >= num2 && num1 <= num3 || num1 <= num2 && num2 >= num3)
        {
            meio = num1;
        }
    else if (num2 >= num3 && num2 <= num1 || num2 >= num1 && num2 <= num3)
        {
            meio = num2;
        }
    else
        {
            meio = num3;
        }
    printf("Menor: %d  Meio: %d  Maior: %d\n",menor,meio,maior);

    system("pause");
    return(0);
}
