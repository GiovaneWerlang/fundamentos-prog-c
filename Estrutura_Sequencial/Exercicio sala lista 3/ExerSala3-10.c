/*10) O c�digo a seguir tem como objetivos:
a) fazer a divis�o float entre dois valores inteiros informados pelo usu�rio;
b) Obter o resto da divis�o do primeiro n�mero pelo segundo n�mero;
Fa�a os ajustes necess�rios para que os objetivos sejam alcan�ados.*/

#include <stdio.h>

int main(void)
{
    float Num1;
    int Num2;
    float Divisao;
    int Resto;

    printf("Informe o primeiro valor: ");
    scanf("%f",&Num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&Num2);
    Divisao = Num1 / (float)Num2;
    Resto = (int)Num1 % Num2;
    printf("A divis�o de %f por %d � %f\n",Num1,Num2, Divisao);
    printf("O resto da divis�o � %d\n",Resto);
}
