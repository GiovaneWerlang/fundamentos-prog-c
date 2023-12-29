/*3) Elaborar um algoritmo que auxilie no controle de uma fazenda de gado que possuí um total de 2000 cabeças. A base de dados é formada por um conjunto de estruturas (registros) contendo os seguintes campos referente a cada cabeça de gado:
	código: código da cabeça de gado,
	leite: número de litros de leite produzido por semana,
	alim: quantidade de alimento ingerida por semana - em quilos,
	nasc: data de nascimento - mês e ano,
	abate: ‘N" (não) ou ‘S’ (sim).

	O campo nasc. é do tipo struct data que por sua vez, possui dois campos:
	mês
	ano

Elaborar funções para:
a) Ler a base de dados (código, leite, alim, nasc.mês e nasc.ano), armazenado em um vetor de estruturas.
b) Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:
	tenha mais de 5 anos, ou;
	produza menos de 40 litros de leite por semana, ou;
	produza entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de alimento por dia.

Crie o menu de opções para:
a) Devolver a quantidade total de leite produzida por semana na fazenda.
b) Devolver a quantidade total de alimento consumido por semana na fazenda.
c) Devolver a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate.
d) Devolver a quantidade total de alimento que vai ser consumido por semana na fazenda, após o abate.
e) Devolver número de cabeças de gado que irão para o abate.
f) Sair do programa. */

#include <stdio.h>

struct data
{
    int data;
    int mes;
    int ano;
};

struct gado
{
    int codigo;
    int leite;
    float alimento;
    char abate;
    struct data nascimento;
};

float qtdeAlimento(struct gado vetGado[], int tam);
int qtdeLeite( struct gado vetGado[], int tam);
int qtdeLeiteDepoisAbate(struct gado vetGado[], int tam);
int qtdeGadoAbatido(struct gado vetGado[], int tam);
void lerDados(struct gado rebanho[], int tam);
void mostrarDados(struct gado rebanho[], int tam);


int main(void)
{
    int tam=3;
    int retornoInt;
    int retornoFloat;
    int i;
    char opcao;
    struct gado rebanho[tam];
    lerDados(rebanho, tam);

    do
    {
        printf("A - Quantidade total de leite\n");
        printf("B - Quantidade total de alimento\n");
        printf("C - Quantidade total de matrizes para abate\n");
        printf("D - Quantidade de leite após abate\n");
        printf("E - Mostrar dados\n");
        printf("S - Sair do programa\n");
        printf("Opção: ");
        fflush(stdin);
        scanf("%c",&opcao);

        switch(opcao)
        {
            case 'A':
            case 'a':
            {
                retornoInt = qtdeLeite(rebanho,3);
                printf("\nProdução total de leite: %d\n", retornoInt);
                break;
            }
            case 'B':
            case 'b':
            {
                retornoFloat = qtdeAlimento(rebanho, 3);
                printf("\nConsumo total de alimento: %.2f\n",retornoFloat);
                break;
            }
            case 'C':
            case 'c':
            {
                retornoInt = qtdeGadoAbatido(rebanho,3);
                printf("Serão abatidas %d matrizes\n",retornoInt);
                break;
            }
            case 'D':
            case 'd':
            {
                retornoInt = qtdeLeiteDepoisAbate(rebanho, 3);
                printf("Quantidade de leite após abate das matrizes: %d \n", retornoInt);
                break;
            }
            case 'E':
            case 'e':
            {
                mostrarDados(rebanho,tam);
                break;
            }
            case 'S':
            case 's':
            {
                exit(0);
                break;
            }
            default:
            {
                printf("Opção inválida\n");
            }
        }
    }while(opcao != 's' && opcao != 'S');
}

void lerDados(struct gado rebanho[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Matriz: %d\n",i+1);
        printf("Código: ");
        scanf("%d",&rebanho[i].codigo);
        printf("Quantidade de leite semanal: ");
        scanf("%d",&rebanho[i].leite);
        printf("Quantidade de alimento semanal: ");
        scanf("%f",&rebanho[i].alimento);
        printf("Data de nascimento: ");
        scanf("%d/%d/%d",&rebanho[i].nascimento.dia,&rebanho[i].nascimento.mes,&rebanho[i].nascimento.ano);
        if(rebanho[i].nascimento.ano < 2011 || rebanho[i].leite < 40 || (rebanho[i].leite > 50 && rebanho[i].leite < 70 && rebanho[i].alimento > 50))
        {
            rebanho[i].abate = 's';
        }
        else
        {
            rebanho[i].abate = 'n';
        }
    }
}

void mostrarDados(struct gado rebanho[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("\nMatriz: %d\n", i+1);
        printf("Código: %d\n",rebanho[i].codigo);
        printf("Quantidade de leite: %d\n", rebanho[i].leite);
        printf("Quantidade de alimento: %.2f\n", rebanho[i].alimento);
        printf("Data de nascimento: %d/%d/%d", rebanho[i].nascimento.dia, rebanho[i].nascimento.mes, rebanho[i].nascimento.ano);
    }
}

float qtdeAlimento(struct gado vetGado[], int tam)
{
    int i;
    float total = 0;

    for(i=0;i<tam;i++)
    {
        total = total + vetGado[i].alimento;
    }
    return(total);
}

int qtdeLeite(struct gado vetGado[], int tam)
{
    int i;
    int total = 0;

    for(i=0;i<tam;i++)
    {
        total = total + vetGado[i].leite;
    }
    return(total);
}

int qtdeLeiteDepoisAbate(struct gado vetGado[], int tam)
{
    int i;
    int total = 0;

    for(i=0;i<tam;i++)
    {
        if(vetGado[i].abata=='n')
        {
            total = total + vetGado[i].leite;
        }
    }
    return(total);
}

int qtdeGadoAbatido(struct gado vetGado[], int tam)
{
    int i;
    int total = 0;

    for(i=0;i<tam;i++)
    {
        if(vetGado[i].abate == 's')
        {
            total++;
        }
    }
    return(total);
}
