/*1) Fazer uma calculadora com as operações de soma, subtração, multiplicação, divisão e resto.
Cada operação é uma função e deve ser acessada a partir de um menu. As funções são implementadas
na próprio programa:
a) Soma sem parâmetros e sem retorno
b) Subtração com parâmetros e sem retorno
c) Multiplicação sem parâmetros e com retorno
d) Divisão com parâmetros e com retorno.
e) Resto com parâmetros e com retorno.*/

#include <stdio.h>
#include <stdlib.h>
void somar(void); //tornar a função conhecida //cabeçalho pois a função está para baixo
void subtrair(int num1, int num2);
int multiplicar(void); //declarar a função
int dividir(int num1,int num2);
int resto(int num1, int num2);

int main(void)
{
    char repetir;
    char opcao;
    int valor1, valor2;
    int retorno;


    do
    {
        system("cls");

        printf("Calculadora\n");
        printf("A - Adição\n");
        printf("S - Subtração\n");
        printf("M - Multiplicação\n");
        printf("D - Divisão\n");
        printf("R - Resto\n");
        printf("Opção: ");
        fflush(stdin);
        scanf("%c",&opcao);

        switch(opcao)
        {
            case 'A':
            case 'a':
            {
                //
                somar();
                break;
            }
            case 'S':
            case 's':
            {
                //void subtrair(int num1, int num2);
                printf("Informe um valor: ");
                scanf("%d",&valor1);
                printf("Informe outro valor: ");
                scanf("%d",&valor2);
                subtrair(valor1,valor2);//copia o valor da variavel 1 para num1, e da 2 para num2
                break;
            }
            case 'M':
            case 'm':
            {
                //int multiplicar(void)
                retorno = multiplicar();
                printf("Multiplicação: %d\n",retorno); //",multiplicar()); também pode
                break;
            }
            case 'D':
            case 'd':
            {
                //int dividir(int num1,int num2)
                printf("Informe um valor: ");
                scanf("%d",&valor1);
                printf("Informe outro valor: ");
                scanf("%d",&valor2);
                if(valor2 != 0)
                {
                    retorno = dividir(valor1, valor2);
                    printf("Divisão %d\n",retorno);
                }
                else
                {
                    printf("Não é possível dividir por zero\n");
                }
                break;
            }
            case 'R':
            case 'r':
            {
                //int resto(int num1, int num2)
                printf("Informe um valor: ");
                scanf("%d",&valor1);
                printf("Informe outro valor: ");
                scanf("%d",&valor2);
                if(valor2 != 0)
                {
                    retorno = resto(valor1, valor2);
                    printf("Resto da divisão %d\n",retorno);
                }
                else
                {
                    printf("Não é possível dividir por zero\n");
                }
                break;
            }
            default:
            {
                printf("Opção inválida\n");
            }

        }

        printf("\nExecutar novamente (s/S sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}//fim da main

//a) Soma sem parâmetros e sem retorno
void somar(void)
{
    int num1, num2;
    int resultado;
    printf("Informe o primeiro valor: ");
    scanf("%d",&num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&num2);
    resultado = num1 + num2;
    printf("Soma = %d\n",resultado);
}

//b) Subtração com parâmetros e sem retorno
void subtrair(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    printf("Subtração = %d\n",resultado);
}

//c) Multiplicação sem parâmetros e com retorno
int multiplicar(void)
{
    int num1, num2;
    int resultado;
    printf("Informe o primeiro valor: ");
    scanf("%d",&num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&num2);
    resultado = num1 * num2;
    return(resultado);
}

//d) Divisão com parâmetros e com retorno.
int dividir(int num1,int num2)
{
    int resultado;
    resultado = num1/num2;
    return(resultado);
    //return(num1/num2);
}

//e) Resto com parâmetros e com retorno.
int resto(int num1, int num2)
{
    int resultado;
    resultado = num1 - ((num1/num2) * num2);// 17 / 5 = 3    3 x 5 = 15  17 - 15 = 2
    return(resultado);
    //resultado = num1 % num2;
}
