void mostradivisor(int num)
{
    int i;
    int qtde;

    printf("1\t");
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d\t",i);
        }
    }
     printf("%d\t",num); //mostra ele mesmo na propria função
}

int contadivisor(int num)
{
    int i;
    int qtde=2; //1 e ele mesmo pois primo n entra no for

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            qtde++;
        }
    }
    return(qtde);
}
