#include <windows.h>

int calculaDiasVida (int num1,int num2,int num3)
{
    int result;
    int day, month, year;

    SYSTEMTIME t;

    GetLocalTime(&t);
    day = t.wDay;
    month = t.wMonth;
    year = t.wYear;

    if(num2==1||num2==3||num2==5||num2==7||num2==8||num2==10||num2==12)
    {
        num1 = 31-num1;
    }
    else if(num2 == 2)
    {
        if((num3 % 4 == 0 && num3 % 100 != 0) || (num3 % 400 == 0))
        {
            num1 = 29-num1;
        }
        else
        {
            num1 = 28-num1;
        }
    }
    else
    {
        num1 = 30-num1;
    }
    num1 = num1 + day;

    num2 = (12 - num2) + month ;

    num3 = 2018 - num3;
    result = num1 + (num2*30) + (num3 * 365);
    return(result);
}
