//arquivo do cabe�alho. Cont�m fun��es
//retornar zero se primo e um se n�o primo
int verificaPrimo(int num)
{
    int i;
    int qtde=0;
    for(i=2;i<=num/2;i++)
    {
        if(num % i == 0)
        {
            qtde++;
            i = num;
        }
    }
    return(qtde);
}
