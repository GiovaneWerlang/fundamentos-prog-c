/*3) Leia um valor float que representa o troco a ser fornecido por um caixa. Separe a parte
inteira (reais) da parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    float troco, resultF;
    int result;

    //entrada
    printf("Informe o valor do troco: ");
    scanf("%f",&troco);

    result = troco;
    printf("%d reais\n",result);
    resultF = troco - result;
    result = resultF * 100;
    printf("%d centavos\n",result);


    system("pause");
    return(0);
}
