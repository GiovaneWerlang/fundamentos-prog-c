/*7) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser
considerados nos cálculos. Informar:
a) Quantos valores positivos formam informados;
b) Quantos valores negativos e pares foram informados;
c) A média dos valores divisíveis por 3 informados. Validar para não fazer divisão por zero no
cálculo da média.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int contP=0;
    int contN=0;
    int soma=0;
    int contV=0;
    float media;

    do{
        printf("Informe um número: ");
        scanf("%d",&num);
        if(num!=0)
        {
            if(num%3==0)
            {

                    soma = soma + num;
                    contV++;

            }
            if(num>0)
            {
                contP++;
            }
            else if(num%-2==0)
            {
                contN++;
            }
        }


    }while(num!=0);
    if(contV!=0)
    {
        media = (float)soma/contV;
        printf("Media e: %.2f\n",media);
    }



    system("pause");
    return(0);
}
