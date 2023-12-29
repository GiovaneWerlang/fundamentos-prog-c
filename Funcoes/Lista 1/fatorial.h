//arquivo de cabeçalho
//mostrar o processo de cálculo do fatorial

void mostraFatorial(int num)
{
    int i;
    for(i=num;i>1;i--)
    {
        printf("%d * ",i);
    }
    printf("1");

}


//calcular o fatorial
int calcularFatorial(int num)
{
    int i;
    int fat=1;
    for(i=num;i>1;i--)
    {
        fat = fat * i;
    }
    return(fat);
}
