#include <math.h>

char verificaPerfeito(int num)
{
    char SN;
    int i, raiz, soma=0;
    int cont=0;
    raiz = sqrt(num);

    for(i=1;i<=num;i=i+2)
    {
        soma = soma + i;
        if(soma>=num)
        {
            break;
        }
    }
    if(soma==num)
    {
        SN = 's';
    }
    else
    {
        SN = 'n';
    }
    return(SN);
}
