/*7) Ler n�meros inteiros. Prosseguir a leitura at� ser informado o valor zero que n�o deve ser
considerados nos c�lculos. Informar:
a) Quantos valores positivos formam informados;
b) Quantos valores negativos e pares foram informados;
c) A m�dia dos valores divis�veis por 3 informados. Validar para n�o fazer divis�o por zero no
c�lculo da m�dia.*/

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
        printf("Informe um n�mero: ");
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
