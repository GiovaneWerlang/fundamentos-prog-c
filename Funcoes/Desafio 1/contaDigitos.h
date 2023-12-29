int contaDigitos(int num)
{
    int i;
    int soma=0;
    int digito;

    for(i=num;i>0;)
    {
        digito = i%10;
        soma = soma + digito;
        i= i/10;
    }
    return(soma);
}
