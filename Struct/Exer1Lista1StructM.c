#include <stdio.h>
#include <stdlib.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

void lerStruct(struct data data1[], int tam);
void mostraStruct(struct data data1[],int tam);
struct data maiorData(struct data data1[], int tam);

int main(void)
{
    char repetir;
    int i;
    int n = 3;
    struct data data1[n];
    struct data maiordata;

    do
    {
        system("cls");
        //

        lerStruct(data1,n);
        mostraStruct(data1,n);
        maiordata = maiorData(data1,n);
        printf("\n\nMaior data armazenada:\n");
        printf("%d/%d/%d",maiordata.dia,maiordata.mes,maiordata.ano);


        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

void lerStruct(struct data data1[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("Informe uma data no formato dd/mm/aaaa: ");
        scanf("%d/%d/%d",&data1[i].dia,&data1[i].mes,&data1[i].ano);
    }
}

void mostraStruct(struct data data1[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d/%d/%d\n",data1[i].dia,data1[i].mes,data1[i].ano);
    }
}

struct data maiorData(struct data data1[], int tam)
{
    int i;
    struct data dados;
    dados.ano = 0;

    for(i=0;i<tam;i++)
    {
        if(data1[i].ano > dados.ano)
        {
            dados = data1[i];
        }
    }
    return(dados);
}
