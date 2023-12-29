/*1) Fazer um algoritmo para ler o sal�rio de uma pessoa, o percentual de aumento e o
percentual de descontos. Os descontos incidem sobre o sal�rio com aumento. Calcular o
novo sal�rio e mostr�-lo na forma: Sal�rio de 1234 reais e 65 centavos.
Observa��es:
a) Orientar o usu�rio na forma como deve ser informado o percentual (por exemplo,
10 para 10% ou 0.1 para 10%), ou seja, como o programa espera que o valor seja
informado. Isso � importante para definir a f�rmula.
b) C�lculos de percentual podem ser realizados por meio de regras de tr�s.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float salario, perAumento, perDesconto, result;
    int resultInt;

    //entrada
    printf("Informe o salario: ");
    scanf("%f",&salario);
    printf("Informe o percentual de aumento,Ex 10: ");
    scanf("%f",&perAumento);
    printf("Informe o percentual de desconto,Ex 10: ");
    scanf("%f",&perDesconto);

    result = ((((float)100 + perAumento) * salario)/100) - (salario * (perDesconto/(float)100));
    resultInt = (int)result;
    result = (result - resultInt)*100;

    printf("Salario de %d reais e %.0f centavos\n",resultInt,result);

    system("pause");
    return(0);
}
