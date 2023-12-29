void mostradivisor(int num)
{
    int i;

    printf("%d - ",num);
    printf("1,  ");
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d,  ",i);
        }
    }
    printf("%d. %d divisores\n",num , contadivisor(num));

}

int contadivisor(int num)
{
    int i, cont = 2;

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            cont++;
        }
    }
    return(cont);
}

int maiorqtdeD (int num1, int num2)
{
    int i, qtdeD;
    int maior=1;

    for(i=num1;i<=num2;i++)
    {
        qtdeD = contadivisor(i);
        if(qtdeD>=maior)
        {
            maior = qtdeD;
        }
    }
    return(maior);
}

int numMaiorqtdeD (int num1, int num2)
{
    int i,qtdeD, maior =1;

    for(i=num1;i<=num2;i++)
    {
        qtdeD = contadivisor(i);
        if(qtdeD>=contadivisor(maior))//usa-se fun��o aqui para comparar a quantidade de divisores do n�mero do i com o n�mero dentro do maior
        {
            maior = i;
        }
    }
    return(maior);
}
