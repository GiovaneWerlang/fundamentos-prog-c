void tipoTriangulo(int num1, int num2, int num3)
{
    int result;
    if(num1==num2&&num1==num3)
    {
        result = 1;
    }
    else if(num1==num2&&num1!=num3||num1==num3&&num1!=num2||num1!=num2&&num2==num3)
    {
        result = 2;
    }
    else
    {
        result = 3;
    }

    if(result==1)
    {
        printf("%d e %d e %d formam um tri�ngulo equil�tero.\n",num1,num2, num3);
    }
    else if(result==2)
    {
        printf("%d e %d e %d formam um tri�ngulo Is�sceles.\n",num1,num2, num3);
    }
    else
    {
        printf("%d e %d e %d formam um tri�ngulo escaleno.\n",num1,num2, num3);
    }

}
