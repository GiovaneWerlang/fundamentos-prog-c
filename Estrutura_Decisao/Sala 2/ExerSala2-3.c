/*3) Ler tr�s valores inteiros e coloc�-los em ordem crescente. Os valores devem ser
apresentados com uma instru��o:
printf(�Menor: %d  Meio: %d  Maior: %d\n�,menor,meio,maior);
Sugest�o: dividir o problema em partes: encontrar o maior, o menor e o do meio
separadamente e armazenar os valores em vari�veis.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3, menor, meio, maior;

    printf("Informe o primeiro n�mero: ");
    scanf("%d",&num1);
    printf("Informe o segundo n�mero: ");
    scanf("%d",&num2);
    printf("Informe o terceiro n�mero: ");
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
