int reais(float num)
{
    int real;

    real = num;
    return(real);
}

float centavos(float num)
{
    float centavos;
    int real;

    centavos = num - reais(num);
    return(centavos);
}
