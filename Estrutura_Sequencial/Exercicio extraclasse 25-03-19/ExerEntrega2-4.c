/*4) Ler um n�mero com at� 4 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em
linhas distintas.
Por exemplo:
Lido o n�mero: 1234
Mostrar da seguinte forma:
1 � o primeiro d�gito.
2 � o segundo d�gito.
3 � o terceiro d�gito.
4 � o quarto d�gito.*/

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
