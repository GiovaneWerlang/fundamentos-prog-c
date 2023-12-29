//arquivo do cabeçalho. Contém funções
//retornar zero se primo e um se não primo
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
