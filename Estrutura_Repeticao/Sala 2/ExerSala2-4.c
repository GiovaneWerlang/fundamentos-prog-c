/*4) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses múltiplos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int media;
    int numMult;
    int mult;
    mult = 0;
    numMult =0;


    for(i=0;i<=500;i++)
    {
        if(i%4==0 || i%10==0)
        {
            mult = mult + i;
            numMult = numMult + 1;
        }
    }
    media = mult /numMult;
    printf("Media dos múltiplos é: %d\n",media);
    system("pause");
    return(0);
}
