/*11) Um motorista de t�xi deseja calcular o rendimento de seu carro na pra�a. Escreva um
programa para ler: a marca��o do od�metro (Km) no in�cio do dia, a marca��o (Km) no final do dia,
o n�mero de litros de combust�vel gasto, o valor do combust�vel por litro e o valor total (R$) recebido dos passageiros.
Calcular e escrever: a m�dia do consumo em Km/L e o lucro (l�quido) do dia.*/

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
