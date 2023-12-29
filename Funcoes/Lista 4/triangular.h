int verificaTriangular (int num)
{
    char result;
    int i, soma =0;

    for(i=1;i<=num;i++)
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
