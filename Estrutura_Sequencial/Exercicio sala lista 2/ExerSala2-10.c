/*10) Leia dois valores inteiros, faça a divisão deles armazenando em uma variável a parte
inteira, em outra a parte decimal dessa divisão e em uma terceira variável a parte decimal,
mas como um inteiro de dois dígitos. Declare as variáveis do tipo adequado.
Exemplo:Informados: 7 e 6
Apresentados:
parte inteira de 7 / 6 : 1
parte decimal de 7 / 6 : 0.166666
parte decimal de 7 / 6 como inteiro de dois dígitos: 16*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, resulInt, resulIntDoisD;
    float resulFloat;

    printf("Informe o primeiro valor inteiro: ");
    scanf("%d",&num1);
    printf("Informe o segundo valor inteiro: ");
    scanf("%d",&num2);

    resulInt = num1/num2;
    printf("Parte inteira: %d\n",resulInt);
    resulFloat =  ((float)num1/num2)-(num1/num2);
    printf("Parte decimal: %f\n",resulFloat);
    resulIntDoisD = (int)(resulFloat * 100);
    printf("Parte decimal com 2 digitos: %d\n",resulIntDoisD);

    system("pause");
    return(0);
}
