int verificaRetangular (int num)
{
    char result;
    int i, soma =0;

    for(i=0;i<=num;i=i+2)
    {
        soma = soma + i;
        if(soma>=num)
        {
            i=num;
        }
    }
    if(soma==num)
    {
        result = 's';
    }
    else
    {
        result = 'n';
    }
    return(result);
}

