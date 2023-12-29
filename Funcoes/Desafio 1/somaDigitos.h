int somaDigitos(int num)
{
    int soma=0, digito;
    int i;

    for(i=num;i>0;)
    {
        digito = i%10;
        soma = soma + digito;
        i = i/10;
    }
    return(soma);
}
