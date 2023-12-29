/*1) Criar uma estrutura para armazenar uma data, como dia, mês e ano em variáveis separadas.
a) Criar um vetor desse tipo de estrutura.
b) Fazer uma função que armazenará os dados no vetor.
c) Fazer uma função que mostra os dados do vetor.
d) Fazer uma função que retorne a estrutura que contém o maior ano.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//declarar, definir a estrutura
//declaração global. TYPEDEF

struct data //declarado um tipo de dado struct com o nome data
{
    int dia;
    int mes;
    int ano;
};

void LerDados(struct data data1[], int tam);
void MostraDados(struct data data1[], int tam);
struct data MaiorData(struct data data1[], int tam);

int main (void)
{
    int tam = 3;
    struct data datas[tam];
    struct data MaiorDataArmazenada;
    LerDados(datas, tam);
    MostraDados(datas, tam);
    MaiorDataArmazenada = MaiorData(datas, tam);
    printf("\n\nMaior data armazenada: \n");
    printf("%d/%d/%d", MaiorDataArmazenada.dia, MaiorDataArmazenada.mes, MaiorDataArmazenada.ano);
}

//Ler dados apra a struct
//passagem de parametro por referencia por ser vetor
//por padrao struct é passagem de parametro por valor

void LerDados(struct data data1[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("Informe uma data no formato dd/mm/aaaa: ");
        scanf("%d/%d/%d", &data1[i].dia, &data1[i].mes,&data1[i].ano);
    }
}

//Mostrar os dados de uma estrutura
void MostraDados(struct data data1[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d/%d/%d\n",data1[i].dia, data1[i].mes, data1[i].ano);
    }
}

//localizar a data com o maior ano
//retornara uma estrutura do tipo data
struct data MaiorData(struct data data1[], int tam)
{
    int i;
    struct data dados;
    dados.ano = 0; //inicializar uma variavel membro da struct

    for(i=0;i<tam;i++)
    {
        if(data1[i].ano > dados.ano)
        {
            dados = data1[i];
        }
    }
    return(dados); //retornar uma struct do tipo data
};
