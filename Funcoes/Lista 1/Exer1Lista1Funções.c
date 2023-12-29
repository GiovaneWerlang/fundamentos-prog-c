/*1) Fazer uma calculadora com as opera��es de soma, subtra��o, multiplica��o, divis�o e resto.
Cada opera��o � uma fun��o e deve ser acessada a partir de um menu. As fun��es s�o implementadas
na pr�prio programa:
a) Soma sem par�metros e sem retorno
b) Subtra��o com par�metros e sem retorno
c) Multiplica��o sem par�metros e com retorno
d) Divis�o com par�metros e com retorno.
e) Resto com par�metros e com retorno.*/

#include <stdio.h>
#include <stdlib.h>
void somar(void); //tornar a fun��o conhecida //cabe�alho pois a fun��o est� para baixo
void subtrair(int num1, int num2);
int multiplicar(void); //declarar a fun��o
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
        printf("A - Adi��o\n");
        printf("S - Subtra��o\n");
        printf("M - Multiplica��o\n");
        printf("D - Divis�o\n");
        printf("R - Resto\n");
        printf("Op��o: ");
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
                printf("Multiplica��o: %d\n",retorno); //",multiplicar()); tamb�m pode
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
                    printf("Divis�o %d\n",retorno);
                }
                else
                {
                    printf("N�o � poss�vel dividir por zero\n");
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
                    printf("Resto da divis�o %d\n",retorno);
                }
                else
                {
                    printf("N�o � poss�vel dividir por zero\n");
                }
                break;
            }
            default:
            {
                printf("Op��o inv�lida\n");
            }

        }

        printf("\nExecutar novamente (s/S sim): ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}//fim da main

//a) Soma sem par�metros e sem retorno
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

//b) Subtra��o com par�metros e sem retorno
void subtrair(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    printf("Subtra��o = %d\n",resultado);
}

//c) Multiplica��o sem par�metros e com retorno
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

//d) Divis�o com par�metros e com retorno.
int dividir(int num1,int num2)
{
    int resultado;
    resultado = num1/num2;
    return(resultado);
    //return(num1/num2);
}

//e) Resto com par�metros e com retorno.
int resto(int num1, int num2)
{
    int resultado;
    resultado = num1 - ((num1/num2) * num2);// 17 / 5 = 3    3 x 5 = 15  17 - 15 = 2
    return(resultado);
    //resultado = num1 % num2;
}
