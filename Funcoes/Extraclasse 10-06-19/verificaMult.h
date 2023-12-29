int verificaMult(int num1, int num2)
{
    int result;

    if(num1%num2==0)
    {
        result=1;
    }
    else
    {
        result=0;
    }
    if(num2%num1==0)
    {
        if(result==1)
        {
            result=11;
        }
        else
        {
            result=01;
        }
    }
    else
    {
        if(result==1)
        {
            result=10;
        }
        else
        {
            result=00;
        }
    }
    return(result);
}
