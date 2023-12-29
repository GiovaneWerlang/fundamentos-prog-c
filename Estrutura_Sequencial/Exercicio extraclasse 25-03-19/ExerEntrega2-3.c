/*3) Fazer um algoritmo que leia um valor float que representa o sal�rio de uma pessoa.
Apresente separadamente os reais (parte inteira) e os centavos (parte decimal).
Observa��o: apresentar os centavos como inteiro de dois d�gitos (98 em vez de 0.98)
Exemplo:
Sal�rio informado: 1345.98
Reais: 1345
Centavos: 98*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float salario;
    int result;

    //entrada
    printf("Informe o salario: ");
    scanf("%f",&salario);

    //processamento

    printf("\nSalario informado: %.2f\n",salario);
    result = (int)salario;
    printf("Reais: %d\n",result);
    result = (salario - result) * 100;
    printf("Centavos: %d\n", result);

    system("pause");
    return(0);
}
