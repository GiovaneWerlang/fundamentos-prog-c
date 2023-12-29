void mostraMult (int num1, int num2)
{
    int i;

    printf("%d - ",num1);
    for(i=num2;i<=num1;i=i+num2)
    {
        printf("%d, ",i);
    }
}

int somaMult (int num1,int num2)
{
    int i, soma=0;

    for(i=num2;i<num1;i=i+num2)
    {
        soma = soma + i;
    }
    if(num1%2==0)
    {
        soma = soma + num1;
    }

    return(soma);
}
