/*7) Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino deseja saber:
_Quantas vezes foi necess�rio abastecer;
_Quantos litros foram consumidos para percorrer a dist�ncia indicada;
_ Quantos litros restaram no tanque ap�s a chegada ao destino.
Faca um programa em C que leia a dist�ncia entre as duas cidades, a capacidade do
tanque e o consumo m�dio do veiculo, calcule e mostre as informa��es solicitadas.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float distancia, tanque, consumo, /*autonomia,*/ resultado2;
    int resultado1;

    printf("Informe a distancia entre as duas cidades: ");
    scanf("%f",&distancia);
    printf("Informe a capacidade do tanque do carro: ");
    scanf("%f",&tanque);
    printf("Informe o consumo medio do veiculo: ");
    scanf("%f",&consumo);

    //autonomia = consumo * tanque;
    resultado1 = (distancia / (consumo * tanque))+0.999999;
    printf("Foi necessario abastecer %d vezes\n",resultado1);
    resultado2 = tanque * (distancia/(consumo * tanque));
    printf("Os litros consumidos para percorrer a distancia sao: %f \n",resultado2);
    resultado2 = ((resultado1* tanque) - (tanque * (distancia/(consumo * tanque)))) ;
    printf("Restaram %f litros no tanque\n",resultado2);

    system("pause");
    return(0);
}
