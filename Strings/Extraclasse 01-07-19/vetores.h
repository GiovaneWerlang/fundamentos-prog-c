#include <stdlib.h>//rand()
#include <math.h>
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

void gerarVetorIntRand(int vetor[], int tam, int limite)
{
    int i;
    int j;
    for(i=0;i<tam;i++)
    {
        vetor[i] = rand() % (limite + 1);
        for(j=0;j<i;j++)//testa do valor inicial até o valor gerado
        {
            if(vetor[i]==vetor[j])//
            {
                j=i;//para sair
                i--;//diminui o i para gerar novamente
            }
        }
    }
}
    /*for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
            {
                    if(i!=j)
                    {
                        if(vetor[i]==vetor[j])
                        {
                            while(vetor[i]==vetor[j])
                            {
                                vetor[j] = rand() % (limite + 1);
                            }
                        }
                    }
            }
    }
}*/

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

void mostrarVetorIntLinha(int vetor[],int tam)
{
    int i;
    int qtde=0;
    int linha;

        do
        {
            printf("Informe a quantidade de números por linha: ");
            scanf("%d",&linha);
        }while(linha<=0);

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
        printf("%d\t",vetor[i]);

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

void mostraMultiMultiplosVetor(int vetor[],int tam, int div)
{
    int i;
    int linha=10;
    int qtde=0;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]%div==0)
        {
            printf("%d\t",vetor[i]);
            qtde++;
            if(qtde%linha==0)
            {
                printf("\n");
            }
        }
    }
}

int verificaMulti(int vetor[], int pos, int multi)
{
    int result;

    if(vetor[pos]%multi==0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }

    return(result);

}

void verificaPrimoVetor(int vetor[],int tam)
{
    int i;
    int j;
    int qtde;

    for(i=0;i<tam;i++)
    {
        qtde=0;
        for(j=2;j<=vetor[i]/2;j++)
        {
            if(vetor[i]%j==0)
            {
                qtde++;
                j = vetor[i];
            }
        }
        if(qtde==0)
        {
            printf("Vetor[%d] = %d -> é primo;\n",i,vetor[i]);
        }
        else
        {
            printf("Vetor[%d] = %d -> não é primo;\n",i,vetor[i]);
        }
    }

}

int veriRetornaPrimoVetor(int vetor[], int pos)
{
    int i;
    int qtde=0;
    char result;

    for(i=2;i<=vetor[pos]/2;i++)
    {
        if(vetor[pos]%i==0)
        {
            qtde++;
            i = vetor[pos];
        }
    }
    if(qtde==0)
    {
        result = 's';
    }
    else
    {
        result = 'n';
    }

    return(result);
}

void armazenaParesVetor(int vetor[],int tam)
{
    int vetor2[tam];
    int i;
    int j;

        j=0;

        for(i=0;i<30;i++)
        {
            if(vetor[i]%2==0)
            {
                vetor2[j] = vetor[i];
                j++;
            }
        }

        for(i=0;i<j;i++)
        {
            printf("%d\t",vetor2[i]);
        }
}

void verificaPerfeitoVetor(int vetor[], int tam)
{
    int i;
    int j;
    int somaD;

    for(i=0;i<tam;i++)
    {
        somaD = 1;
        if(i%2==0)
        {
            printf("Vetor[%d] = %3d ",i,vetor[i]);

            for(j=2;j<=vetor[i]/2;j++)
            {
                if(vetor[i] % j == 0)
                {
                    somaD = somaD + j;
                }
            }

            if(somaD == vetor[i])
            {
                printf("é perfeito.\n");
            }
            else
            {
                printf("não é perfeito.\n");
            }
        }

    }
}

void somaImparesVetor(int vetor[], int tam)
{
    int i;
    int j;
    int somaI;
    int digito;
    int aux;

    for(i=0;i<tam;i++)
    {
        somaI = 0;
        if(i%2!=0)
        {
            printf("Vetor[%d] = %3d ",i,vetor[i]);
            aux = vetor[i];
            for(j=0;aux>0;)
            {
                digito = aux%10;
                somaI = somaI + digito;
                aux = aux/10;
            }
            printf("soma dos dígitos: %d\n",somaI);


        }

    }
}

int verificaPar(int vetor[], int pos)
{
    int result;

    if(vetor[pos]%2==0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }

    return(result);

}

void verificaElementoVetor(int vetor[], int tam, int num)
{
    int i;
    int aux=0;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]==num)
        {
            printf("Vetor[%d] = %d",i,num);
            aux++;
        }
        else
        {
            if(i==tam-1&&aux==0)
            {
                printf("-1");
            }
        }
    }
}

int contaIntervaloVetor(int vetor[],int tam,int limiteInf, int limiteSup)
{
    int i;
    int cont = 0;

    for(i=0;i<tam;i++)
    {
        if(vetor[i]>=limiteInf&&vetor[i]<=limiteSup)
        {
            cont++;
        }
    }
    return(cont);
}

int fatorialVetor(int vetor[],int pos)
{
    int i;
    int fat=1;

    for(i=vetor[pos];i>1;i--)
    {
        fat = fat * i;
    }
    return(fat);
}

void potenciaVetor(int vetorBase[],int pos, int vetorPotencia[], int pos2)
{
    int i;
    int aux;
    aux = vetorBase[pos];

    if(vetorPotencia[pos2]>0)
    {
        printf("%d ^ %d = ",vetorBase[pos],vetorPotencia[pos2]);
        for(i=vetorPotencia[pos2];i>1;i--)
        {
            vetorBase[pos] = vetorBase[pos] * aux;
        }
        printf("%d", vetorBase[pos]);
    }
    else
    {
        printf("1");
    }
}

void mostraUniVet(int vetor[],int i)
{
    printf("%d ",vetor[i]);
}

void hipotenusaVet(int vetor1[], int vetor2[], int tam)
{
    int i;
    float hipo;

    for(i=0;i<tam;i++)
    {
        printf("%d\t%d\t", vetor1[i],vetor2[i]);
        printf("%.2f\n",hipo=sqrt((vetor1[i]*vetor1[i])+ (vetor2[i]*vetor2[i])));

    }
}

int veriContidoVetor(int vetor[], int tam, int num)
{
    int i, j;
    int prox=0;
    int menorP=0;
    int maiorP=0;

    ordenaVetor(vetor,tam);

    for(i=0;i<tam;i++)
    {
        if(vetor[i]==num)
        {
            prox = vetor[i];
            return(prox);
            i=tam;
        }
        if(vetor[i]>maiorP)
        {
            maiorP = vetor[i];
        }
    }
    if(prox==0)
    {
        for(j=0;j<tam;j++)
        {
            if(vetor[j]>num)
            {
                if(vetor[j]<maiorP)
                {
                    maiorP = vetor[j];
                }

            }
            else
            {
                if(vetor[j]> menorP)
                {
                    menorP = vetor[j];
                }

            }
        }
        if((maiorP-num)<= (num-menorP))
        {
            return(maiorP);
        }
        else
        {
            return(menorP);
        }
    }
}
