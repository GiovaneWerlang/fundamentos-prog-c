int somadigito(int num)
{
    int soma=0;
    int digito;
    int i;

    for(i=num;i>0;)
    {
        digito = i%10;
        soma = soma + digito;
        i = i/10;
    }
    return(soma);
}
int contadigito(int num)
{
    int cont=0;
    int digito;
    int i;

    for(i=num;i>0;)
    {
        digito = i%10;
        i = i/10;
        if(i>0)
        {
            cont++;
        }
    }
    return(cont);
}
void verificamult( int num1, int num2)
{
    int digito;
    int i;
    for(i=num1;i>0;)
    {
        digito = i%10;
        i = i/10;
        if(digito%num2==0)
        {
            printf("%d é multiplo de %d.",digito,num2);
        }
        else
        {
            printf("%d não é multiplo de %d.",digito,num2);
        }
    }
}

int contadigitorep(int num1, int num2)
{
    int digito;
    int i, cont=0;

    for(i=num2;i>0;)
    {
        digito = i%10;
        i = i/10;
        if(digito==num1)
        {
            cont++;
        }
    }
}
