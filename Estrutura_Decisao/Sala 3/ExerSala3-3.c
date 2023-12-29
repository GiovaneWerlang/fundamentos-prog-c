/*3) O código a seguir tem o objetivo de obter o resto da divisão do número maior pelo
menor (independentemente da ordem que foram informados) e apresentar que não é
possível realizar a divisão caso o divisor seja zero. Faça os ajustes necessários para que
esses objetivos sejam alcançados.*/



# include <stdio.h>



int main(void)
{
 int Num1;
 int Num2;
 int Resto;
 printf("Informe o primeiro valor: ");
 scanf("%d",&Num1);
 printf("Informe o segundo valor: ");
 scanf("%d",&Num2);

    if (Num1 == 0 || Num2 == 0)
    {
    printf("Não é possível realizar a divisão por zero\n");
    }
    else if(Num1 > Num2)
    {
    Resto = Num1 % Num2;
    }
    else
    {
    Resto = Num2 % Num1;
    }

    printf("O resto da divisão é %d\n",Resto);
}
