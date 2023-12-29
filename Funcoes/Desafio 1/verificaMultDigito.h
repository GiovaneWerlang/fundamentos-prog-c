void verificaMultDigito(int num1, int num2)
{
    int i;
    int digito;

    for(i=num1;i>0;)
    {
        digito = i%10;
        if(i%num2==0)
        {
            printf("O dígito %d é multiplo de %d.\n",digito,num2);
        }
        i = i/10;
    }
}
