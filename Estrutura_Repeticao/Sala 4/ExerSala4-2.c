/*2) Uma pessoa aplicou R$ 1000,00 com rendimento de 5% ao mês. Quantos meses serão
necessários para que o capital investido ultrapasse R$ 1200,00.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float aplicacao = 1000.00;
    int rendimento = 5;
    int meses;

    do{
        if(aplicacao<1200)
        {
        aplicacao = aplicacao + (aplicacao/(float)rendimento);
        meses++;
        }
    }while(aplicacao<1200.00);
    printf("Serão necessários %d meses para o capital investido ultrapassar R$ 1200,00\n",meses);



    system("pause");
    return(0);
}
