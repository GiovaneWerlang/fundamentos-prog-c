/*11) Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Escreva um
programa para ler: a marcação do odômetro (Km) no início do dia, a marcação (Km) no final do dia,
o número de litros de combustível gasto, o valor do combustível por litro e o valor total (R$) recebido dos passageiros.
Calcular e escrever: a média do consumo em Km/L e o lucro (líquido) do dia.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float kmI, kmF, numL, valorL, valorTotal, media, lucro;

    //entrada
    printf("Informe a marcacao no inicio do dia: ");
    scanf("%f",&kmI);
    printf("Informe a marcacao no final do dia: ");
    scanf("%f",&kmF);
    printf("Informe o numero de litros de combustivel gasto: ");
    scanf("%f",&numL);
    printf("Informe o valor do combustivel por litro: ");
    scanf("%f",&valorL);
    printf("Informe o valor total de reais recebido: ");
    scanf("%f",&valorTotal);

    media = (numL/(kmF - kmI)) * valorL;
    printf("A media do consumo em Km/L e: %.2f\n",media);
    lucro = valorTotal - numL * valorL;
    printf("O lucro do dia foi: R$ %.2f\n",lucro);





    system("pause");
    return(0);
}
