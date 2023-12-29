#include <stdio.h>

struct livro
{
    char titulo[15];
    char autor[20];
    char estilo[10];
    int codigo;
    float preco;
};

struct livro livraria[10];

void listarLivros(struct livro livraria[], int tam);


int main(void)
{
    char repetir;

    do
    {
        system("cls");

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    system("pause");
    return(0);
}

void listarLivros(struct livro livraria[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%s\n",livraria[i].titulo);
    }
}

void buscaAutorLivro(struct livro livraria[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        for(j=0;livraria[i].autor[j]!='\0';j++)
        {

        }
    }
}

void buscaTituloLivro(struct livro livraria[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        for(j=0;livraria[i].titulo[j]!='\0';j++)
        {

        }
    }
}

void buscaEstiloLivro(struct livro livraria[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        for(j=0;livraria[i].estilo[j]!='\0';j++)
        {

        }
    }
}

void mediaPrecoLivro(struct livro livraria[], int tam)
{
    int i;
    float media=0;

    for(i=0;i<tam;i++)
    {
        media = media + livraria[i].preco;
    }
    media = media / tam;
    printf("Media de preço de todos os livros: %.2f",media);
}
