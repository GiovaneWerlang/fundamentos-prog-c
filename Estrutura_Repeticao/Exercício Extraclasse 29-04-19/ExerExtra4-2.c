/*2) Elaborar um programa para automatizar o caixa de uma loja. Leia a quantidade e o valor
unitário de cada produto. Calcule o valor total da compra. Informe esse valor para o usuário e
o usuário informa o valor para pagamento. O programa calcula o troco e informa-o ao usuário
em notas de 10, 5, 2, 1 e os centavos. Prosseguir a leitura enquanto a quantidade informada é
maior que zero. Se informado zero ou valor negativo para a quantidade não ler o valor
unitário.
Observação: fornecer o troco, de 57.30, por exemplo, na forma:
5 cédulas de 10 reais, 1 cédula de 5 reais, 1 cédula de 2 reais e 30 centavos.*/

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
        printf("Informe o valor unitário: ");
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

printf("%d cédulas de 10 reais\n%d cédulas de 5 reais\n%dcédulas de 2 reais\n%dcédulas de 1 real\n%.2f centavos\n",cedula10,cedula5,cedula2,cedula1,centavos);

system("pause");
return(0);
}
