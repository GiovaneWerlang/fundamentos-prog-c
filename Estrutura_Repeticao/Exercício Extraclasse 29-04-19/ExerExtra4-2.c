/*2) Elaborar um programa para automatizar o caixa de uma loja. Leia a quantidade e o valor
unit�rio de cada produto. Calcule o valor total da compra. Informe esse valor para o usu�rio e
o usu�rio informa o valor para pagamento. O programa calcula o troco e informa-o ao usu�rio
em notas de 10, 5, 2, 1 e os centavos. Prosseguir a leitura enquanto a quantidade informada �
maior que zero. Se informado zero ou valor negativo para a quantidade n�o ler o valor
unit�rio.
Observa��o: fornecer o troco, de 57.30, por exemplo, na forma:
5 c�dulas de 10 reais, 1 c�dula de 5 reais, 1 c�dula de 2 reais e 30 centavos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{


int qtdeP, cedula10, cedula5, cedula2, cedula1;
float valorU, totalC=0, valorP, troco, centavos;

do{
    printf("Informe a quantidade do produto: ");
    scanf("%d",&qtdeP);
    if(qtdeP>0)
    {
        printf("Informe o valor unit�rio: ");
        scanf("%f",&valorU);
        if(valorU>0)
        {
            totalC = totalC + ((float)qtdeP * valorU);
        }

    }
}while(qtdeP>0);

printf("Valor total a pagar: R$%.2f\n",totalC);

do{
    printf("Informe o valor para pagamento: ");
    scanf("%f",&valorP);
}while(valorP<totalC);

troco = valorP - totalC;
cedula10 = (int)troco /10;
cedula5 = ((int)troco%10)/5;
cedula2 = (int)troco%10%5/2;
cedula1 = (int)troco%10%5%2;
centavos = troco - (int)troco;

printf("%d c�dulas de 10 reais\n%d c�dulas de 5 reais\n%dc�dulas de 2 reais\n%dc�dulas de 1 real\n%.2f centavos\n",cedula10,cedula5,cedula2,cedula1,centavos);

system("pause");
return(0);
}
