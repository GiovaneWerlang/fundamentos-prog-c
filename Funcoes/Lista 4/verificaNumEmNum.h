void verificaNumEmNum(int num1,int num2)
{
    int i,digito;

    for(i=num2;i>0;)
    {
        digito = i%10;
        if(num1==digito)
        {
            i=0;
            printf("%d possui %d como digito.\n",num2,num1);
        }
        else
        {
            i= i/10;
            if(i<=0)
            {
                printf("%d não possui %d como digito.\n",num2,num1);
            }
        }
    }

}
