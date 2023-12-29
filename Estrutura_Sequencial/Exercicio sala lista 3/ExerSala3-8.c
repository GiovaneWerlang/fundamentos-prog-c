/*8) Suponha que um caixa disponha apenas de cédulas de R$ 10, 5, 2 e 1. Escreva um
programa para ler o valor de uma conta e o valor fornecido pelo usuário para pagar essa conta, e calcule e troco.
Calcular e mostrar a quantidade de cada tipo de cédula que o caixa deve fornecer como troco e os centavos que devem ser fornecidos.
Mostrar, também o valor da compra e do troco.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float valorConta, valorFornecido, troco;
    int ced1, ced2, ced3, ced4;

    //entrada
    printf("Informe o valor da conta: ");
    scanf("%f",&valorConta);
    printf("Informe o valor fornecido pelo comprador: ");
    scanf("%f",&valorFornecido);

    troco = valorFornecido - valorConta;
    ced1 = (int)troco /10;
    ced2 = ((int)troco %10)/5;
    ced3 = (((int)troco %10) %5) /2;
    ced4 = ((((int)troco %10) %5) %2);
    /*if(troco >=10){
    ced1 = (troco / 10);
    }if(((int)troco % 10)>=5){
    ced2 =(((int)troco%10) / 5);
    }if((((int)troco%10)%5)>=2){
    ced3 = (((int)troco % 10)%5)/2;
    }if(((((int)troco%10)%5)% 2)>=1){
    ced4=1;}*/
    printf("%d cedulas de 10 \n%d cedulas de 5 \n%d cedulas de 2 \n%d cedulas de 1\n",ced1, ced2, ced3,ced4);
    printf("O valor da compra e: R$ %f\nO valor do troco e: R$ %f\n",valorConta,troco);

    system("pause");
    return(0);
}
