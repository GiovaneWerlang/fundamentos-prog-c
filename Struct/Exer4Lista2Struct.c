#include <stdio.h>
#include <stdlib.h>

struct apartamento
{
    char nome[15];
    int numero;
    int area;
    int nMoradores;
    float valor;
};

struct apartamento condominio[40];

int areaTotalCondominio(struct apartamento condominio[], int tam);
void valorPagarCondominio(struct apartamento condominio[], int tam, int area);
void maisMoradores(struct apartamento condominio[], int tam);
void geraCondominio(struct apartamento condominio[], int tam);



int main(void)
{
    char repetir;

    do
    {
        system("cls");

            int retorno;
            printf("Dados e calculos do condominio: \n");
            geraCondominio(condominio, 40);
            retorno = areaTotalCondominio(condominio,40);
            valorPagarCondominio(condominio,40,retorno);
            maisMoradores(condominio, 40);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}

void geraCondominio(struct apartamento condominio[], int tam)
{
    int i;
    int j;

    for(i=0;i<tam;i++)
    {
        for(j=0;j<15;j++)
        {
            condominio[i].nome[j] = rand() % (90 - 67 +1) + 67;
        }
        condominio[i].numero = rand() % (300 - 100 + 1) + 100;
        condominio[i].area = rand() % (280 - 200 + 1) + 200;
        condominio[i].nMoradores = rand() % 10 +1;
    }
}
int areaTotalCondominio(struct apartamento condominio[], int tam)
{
    int i;
    int total=0;

    for(i=0;i<tam;i++)
    {
        total = total + condominio[i].area;
    }
    return(total);
}

void valorPagarCondominio(struct apartamento condominio[], int tam, int area)
{
    float despesas;
    int i;

    do
    {
        printf("Informe o total de despesas do condominio: ");
        scanf("%f",&despesas);
    }while(despesas<=0);

    for(i=0;i<tam;i++)
    {
        condominio[i].valor = (despesas/100.0) * ((condominio[i].area / (float) area) * 100.0);
    }
}

void maisMoradores(struct apartamento condominio[], int tam)
{
    int i;
    int maior=0;

    for(i=0;i<tam;i++)
    {
        if(condominio[i].nMoradores > maior)
        {
            maior = condominio[i].nMoradores;
        }
    }
    for(i=0;i<tam;i++)
    {
        if(maior==condominio[i].nMoradores)
        {
            printf("\n%s\t%d\t%d\t%d\t%.2f", condominio[i].nome, condominio[i].numero, condominio[i].area, condominio[i].nMoradores, condominio[i].valor);
        }
    }
}
