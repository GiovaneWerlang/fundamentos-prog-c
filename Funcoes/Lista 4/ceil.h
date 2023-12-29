void exerceil(float num)
{
    float result;
    int retorno;

    result = num + 0.999999;
    retorno = result;
    if(retorno<=num+1)
    {
        retorno = result;
    }
    else
    {
        retorno = num;
    }
    printf("%.2f\t%d",num,retorno);
}

int limiceil(float num1, float num2)
{
    float i;
    int result;

    for(i=num1;i<=num2;i=i+1.00)
    {
        exerceil(i);
        printf("\n");
    }
}
