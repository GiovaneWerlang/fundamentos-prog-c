#include <math.h>

float hipotenusa(int num1, int num2)
{
    float resultado;
    resultado = (num1 * num1) + (num2 * num2);
    return(resultado);
}

float hipoC(int n1, int n2)
{
    float result;
    result = (n1 * n1) + (n2 * n2);
    return(result);
}
float interHipo(void)
{
    int a, b;
    float retorno;

    do
    {
        printf("Informe o primeiro lado: ");
        scanf("%d",&a);
    }while(a<=0);
    do
    {
        printf("Informe o segundo lado: ");
        scanf("%d",&b);
    }while(b<=0);

    retorno = hipoC(a,b);
    retorno = sqrt(retorno);

    printf("A hipotenusa de um triângulo retângulo com lado %d e lado %d é %.2f",a,b,retorno);
}
