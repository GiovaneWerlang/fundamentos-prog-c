/*8) Escrever um algoritmo que o leia o n�mero de horas trabalhadas, o valor por hora, o
n�mero de filhos com idade menor do que 14 anos, o valor do sal�rio fam�lia por filho e
calcula o sal�rio desse funcion�rio.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int horasTrab, valorH, numF, salarioPorF;
    float salario;

    printf("Informe as horas trabalhadas: ");
    scanf("%d",&horasTrab);
    printf("Informe o valor por hora: ");
    scanf("%d",&valorH);
    printf("Informe numero de filhos menores de 14: ");
    scanf("%d",&numF);
    printf("Informe o valor do salario familia por filho: ");
    scanf("%d",&salarioPorF);

    salario = (horasTrab * valorH) + ((float)numF * salarioPorF);
    printf("O salario do funcionario e de %f\n",salario);

    system("pause");
    return(0);
}
