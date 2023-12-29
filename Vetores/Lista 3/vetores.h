#include <stdlib.h>//rand()
//gerar valores para um vetor
//limite determina o valor maximo que queremos armazenado no vetor
void gerarVetorInt(int vetor[],int tam, int limite)
{
    int i;
    for(i=0;i<tam;i++)
    {
        vetor[i] = rand() % (limite + 1);//é void pois escreve direto para o vetor
    }
}

//gerar vetor intervalo
void gerarVetorIntervalo(int vetor[],int tam, int limiteInf, int limiteSup)
{
    int i;
    for(i=0;i<tam;i++)
    {
        vetor[i] = rand() % (limiteSup - limiteInf + 1) + limiteInf;//é void pois escreve direto para o vetor
    }
}
//mostrar os valores de um vetor
void mostrarVetoresInt(int vetor[],int tam)
{
    int i;
    int linha=5;
    int qtde=0;
    for(i=0;i<tam;i++)
    {
        printf("%4d",vetor[i]);
        qtde++;
        if(qtde%linha==0)
        {
            printf("\n");
        }
    }
}

void mostrarVetorInt(int vetor[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%4d\t",vetor[i]);

    }
}

void mostraDivisorVet(int vetor[],int tam)
{
    int i, j;

    for(i=0;i<tam;i++)
    {
        printf("1,");
        for(j=2;j<vetor[i]/2;j++)
        {
            if(vetor[i]%j==0)
            {
                printf(" %d,",vetor[i]);
            }
        }
    }
}

void qtdeDivisorVet(int vetor[],int tam)
{
    int i, j;
    int qtdeD;

    for(i=0;i<tam;i++)
    {
        qtdeD=1;
        for(j=2;j<vetor[i]/2;j++)
        {
            if(vetor[i]%j==0)
            {
                printf(" %d divisores",qtdeD);
            }
        }
    }
}

void ordenaVetor(int vetor[],int tam)
{
    int copo;
    int i;
    int j;

    for(i=0;i<tam;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(vetor[i]>vetor[j])
            {
                copo = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=copo;
            }
        }
    }
}

void mostraVet(int vetor[],int i)
{
    printf("%d - ",vetor[i]);
}

void mostraDivVet(int vetor[],int i)
{
    int j;

     printf("1,");
        for(j=2;j<=vetor[i]/2;j++)
        {
            if(vetor[i]%j==0)
            {
                printf(" %d,",j);
            }
        }
    printf(" %d,",vetor[i]);
}

int qtdeDivVet(int vetor[],int i)
{
    int  j;
    int qtdeD;

        qtdeD=2;
        for(j=2;j<=vetor[i]/2;j++)
        {
            if(vetor[i]%j==0)
            {
                qtdeD++;
            }
        }
        printf(" %d divisores",qtdeD);
    return(qtdeD);
}

int mostraParesVet(int vetor[],int i)
{
    int j;

    for(j=2;j<=vetor[i];j=j+2)
    {
        printf("%d ",j);
    }
}

int somaVet(int vetor[], int i)
{
    int j;
    int soma=0;

    for(j=2;j<=vetor[i];j=j+2)
    {
        soma = soma + j;
    }
    printf("<=== Soma = %d\n",soma);
}

void gerarVetorFloat(float vetor[],int tam, int limite)
{
    int i;
    for(i=0;i<tam;i++)
    {
        vetor[i] = rand() % limite / (rand() % 6 + 1.0);//é void pois escreve direto para o vetor
    }
    //rand() % limite / (rand() % 6 + 1)
}

void gerarVetorFloatIntervalo(float vetor[],int tam, int limiteInf, int limiteSup)
{
    int i;
    for(i=0;i<tam;i++)
    {
        vetor[i] = rand() % limiteInf / (rand() % limiteSup + 1.0);
    }
}

void mostrarVetoresFloat(float vetor[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%10.6f",vetor[i]);
    }
}

void gerarVetorChar(char vetor[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        vetor[i] = rand() % 26 + 97;
    }
}

void mostrarVetorChar(char vetor[],int tam)
{
    int i;
    int qtde=0;
    int linha=15;
    for(i=0;i<tam;i++)
    {
        printf("%c ",vetor[i]);
        qtde++;
        if(qtde%linha==0)
        {
            printf("\n");
        }
    }
}

void gerarVetorAlfa(char vetor[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        vetor[i] = rand() % 255 + 1;
    }
}

void mostrarVetorAlfa(char vetor[],int tam)
{
    int i;
    int qtde=0;
    int linha=12;
    for(i=0;i<tam;i++)
    {
        printf("%c ",vetor[i]);
        qtde++;
        if(qtde%linha==0)
        {
            printf("\n");
        }
    }
}
