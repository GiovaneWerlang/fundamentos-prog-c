#include <stdio.h>
#include <stdlib.h>

struct carro
{
    char marca[15];
    int ano;
    char cor[10];
    float preco;
};

struct carro vetcarros[5];

void lerStruct(struct carro vetcarros[], int tam);
void mostraStruct(struct carro vetcarros[], int tam);
void mostraStructPIgual(struct carro vetcarros[], int tam, float preco);
void buscaModelo(struct carro vetcarros[], int tam);
void geraStruct(struct carro vetcarros[], int tam);


int main(void)
{
    char repetir;
    char opcao;


    do
    {
        system("cls");

            printf("Struct carros: \n");
            printf("A - Lê dados de carros.\n");
            printf("B - Mostra os carros com preço igual ou preço informado pelo usuários.\n");
            printf("C - Lê a marca e mostra todos os carros desta marca.\n");
            printf("D - Lê marca, ano e cor e informa se existe ou não, e se existir mostra preço.\n");
            printf("Opção: ");
            scanf("%c",&opcao);

            switch(opcao)
            {
                case 'A':
                case 'a':
                {
                    geraStruct(vetcarros,5);
                    mostraStruct(vetcarros,5);
                    break;
                }
                case 'B':
                case 'b':
                {
                    float preco;

                    lerStruct(vetcarros,5);

                    do
                    {
                        printf("Informe o preço para checar: ");
                        scanf("%f",&preco);
                    }while(preco<=0);

                    mostraStructPIgual(vetcarros,5,preco);


                    break;
                }
                case 'C':
                case 'c':
                {
                    char marca[15];
                    int i;
                    int j;
                    int cont;
                    int aux;


                    lerStruct(vetcarros,5);
                    printf("Informe a marca para checar: ");
                    fflush(stdin);
                    gets(marca);

                    aux = contaString(marca);

                    for(i=0;i<5;i++)
                    {
                        cont = 0;
                        for(j=0;vetcarros[i].marca[j]!='\0';j++)
                        {
                            if(marca[j]==vetcarros[i].marca[j])
                            {
                                cont++;
                            }
                            else
                            {
                                break;
                            }
                        }
                        if(cont==aux)
                        {
                            printf("%.2f\t%d\t%s\n",vetcarros[i].preco,vetcarros[i].ano,vetcarros[i].cor);
                        }
                    }

                    break;
                }
                case 'D':
                case 'd':
                {
                    lerStruct(vetcarros,5);
                    buscaModelo(vetcarros, 5);

                    break;
                }
                default:
                    {
                        printf("Opção inválida.\n");
                    }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

void lerStruct(struct carro vetcarros[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("Informe a marca: ");
        fflush(stdin);
        gets(vetcarros[i].marca);
        do
        {
            printf("Informe o ano de fabricação: ");
            scanf("%d",&vetcarros[i].ano);
        }while(vetcarros[i].ano<=1900);
        printf("Informe a cor: ");
        fflush(stdin);
        gets(vetcarros[i].cor);
        do
        {
            printf("Informe o preço: ");
            scanf("%f",&vetcarros[i].preco);
        }while(vetcarros[i].preco<=0);
    }
}

void mostraStruct(struct carro vetcarros[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("Marca: %s\n",vetcarros[i].marca);
        printf("Ano: %d\n",vetcarros[i].ano);
        printf("Cor: %s\n",vetcarros[i].cor);
        printf("Preço: %.2f\n\n",vetcarros[i].preco);
    }
}

void mostraStructPIgual(struct carro vetcarros[], int tam, float preco)
{
    int i;
    int j;

    for(i=0;i<tam;i++)
    {
        if(vetcarros[i].preco == preco)
        {
            printf("%s\t%s\t%d\tPreço igual ao informado\n",vetcarros[i].marca,vetcarros[i].cor,vetcarros[i].ano);
        }
        for(j=0;j<tam;j++)
        {
            if(i!=j && vetcarros[i].preco==vetcarros[j].preco)
            {
                printf("%s\t%s\t%d\n",vetcarros[i].marca,vetcarros[i].cor,vetcarros[i].ano);
            }
        }
    }
}

void buscaModelo(struct carro vetcarros[], int tam)
{
    int i;
    int j;
    int k;
    int cont;
    int aux;

    struct carro dados;
    printf("Informe os dados do carro para pesquisa: \n");
    printf("Marca: ");
    fflush(stdin);
    gets(dados.marca);
    printf("Ano: ");
    scanf("%d",&dados.ano);
    printf("Cor: ");
    fflush(stdin);
    gets(dados.cor);
    aux = contaString(dados.marca);

    for(i=0;i<tam;i++)
    {
        cont=0;
        for(j=0;vetcarros[i].marca[j]!='\0';j++)
        {
            if(dados.marca[j]==vetcarros[i].marca[j])
            {
                cont++;
            }
            else
            {
                break;
            }
        }
        if(cont==aux && dados.ano == vetcarros[i].ano)
        {
            for(k=0;vetcarros[i].cor[j]!='\0';k++)
            {
                cont=0;
                if(dados.cor[j]==vetcarros[i].cor[j])
                {
                    cont++;
                }
                else
                {
                    break;
                }
            }
            if(cont==aux)
            {
                printf("Existe um carro com essas caracteristicas.\n");
                printf("Preço: %.2f",vetcarros[i].preco);
            }
        }
    }

}

int contaString(char marca[])
{
    int i=0;

    while(marca[i] != '\0')
    {
        i++;
    }
    return(i);
}

void geraStruct(struct carro vetcarros[], int tam)
{
    int i;
    int j;

    for(i=0;i<tam;i++)
    {
        for(j=0;j<10;j++)
        {
            vetcarros[i].marca[j] = rand() % (90-65 +1) + 65;
            vetcarros[i].cor[j] = rand() % (90-65 +1) + 65;
        }
        vetcarros[i].ano = rand() % (2020 - 1900 +1) + 1900;
        vetcarros[i].preco = rand() % (50000 - 2000 + 1) + 2000;
    }
}
