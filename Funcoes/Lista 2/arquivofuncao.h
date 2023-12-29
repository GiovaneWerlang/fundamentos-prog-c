float hipotenusa(num1, num2)
{
    float hipo;
    hipo = (float)(num1 * num1) + (num2 * num2);
    return(hipo);
}

int multiplos(num1, num2)
{

    char resM;
    if(num1%num2==0)
    {
        resM = 's';
    }
    else
    {
        resM = 'n';
    }
    return(resM);
}
