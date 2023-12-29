void palindromo(int num)
{
    int i, cont=0;
    int uni, dez, cen, pri, inv;

    if(num<=99)
    {
        uni = num%10;
        dez = num/10;
        if(uni==dez)
        {
            printf("%d é palindromo.\n",num);
        }
        else
        {
            printf("%d não é palindromo.\n",num);
        }
    }
    else if(num>=100&&num<=999)
    {
        uni = num%10;
        cen = num/100;
        if(uni==cen)
        {
            printf("%d é palindromo.\n",num);
        }
        else
        {
            printf("%d não é palindromo.\n",num);
        }
    }
    else
    {
        uni = num%10;
        dez = num/10%10;
        inv = uni*10 + dez;
        pri = num/100;
        if(pri == inv)
        {
            printf("%d é palindromo.\n",num);
        }
        else
        {
            printf("%d não é palindromo.\n",num);
        }
    }
    for(i=10;i<=9999;i++)
    {
         uni = 0;
         dez = 0;
         cen = 0;
         pri = 0;
         inv = 0;

         if(i<=99)
        {
            uni = i%10;
            dez = i/10;
            if(uni==dez)
            {
                printf("%d\t",i);
                cont++;
                if(cont%5==0)
                {
                    printf("\n");
                }
            }
        }
        else if(i>=100&&i<=999)
        {
            uni = i%10;
            cen = i/100;
            if(uni==cen)
            {
                printf("%d\t",i);
                cont++;
                if(cont%5==0)
                {
                    printf("\n");
                }
            }
        }
        else if(i>=1000&&i<=9999)
        {
            uni = i%10;
            dez = i/10%10;
            inv = uni*10 + dez;
            pri = i/100;
            if(pri == inv)
            {
                printf("%d\t",i);
                cont++;
                if(cont%5==0)
                {
                    printf("\n");
                }
            }
        }
    }
}
