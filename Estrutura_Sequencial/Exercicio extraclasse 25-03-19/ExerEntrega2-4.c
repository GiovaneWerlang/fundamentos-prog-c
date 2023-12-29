/*4) Ler um número com até 4 dígitos. Separar os dígitos desse número e mostrá-los em
linhas distintas.
Por exemplo:
Lido o número: 1234
Mostrar da seguinte forma:
1 é o primeiro dígito.
2 é o segundo dígito.
3 é o terceiro dígito.
4 é o quarto dígito.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int num1, result;

    //entrada
    printf("Insira um numero com ate 4 digitos: ");
    scanf("%d",&num1);

    //processamento
    result = num1/1000;
    printf("%d e o primeiro digito.\n", result);
    result = (num1 % 1000)/100;
    printf("%d e o segundo digito. \n", result);
    result = (num1 % 100)/10;
    printf("%d e o terceiro digito. \n", result);
    result = num1 % 10;
    printf("%d e o quarto digito. \n", result);

    system("pause");
    return(0);

}
