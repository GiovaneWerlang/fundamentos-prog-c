int contaQtdeDigito(int num1, int num2)
{
    int i;
    int digito;
    int cont=0;

    for(i=num2;i>0;)
    {
        digito = num2%10;
        if(digito==num1)
        {
            cont++;
        }
        i= i/10;
    }
    return(cont);
}
