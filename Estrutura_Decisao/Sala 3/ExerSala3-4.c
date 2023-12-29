/*4) Fa�a um programa que leia tr�s valores representando os lados de um tri�ngulo.
Primeiro, coloque esses valores em ordem crescente, em seguida determine e mostre o
tipo de tri�ngulo que esses lados formam de acordo com as seguintes defini��es. Para
essas defini��es a � o maior valor, b o do meio e c o menor.
Se a > b + c � valores n�o formam um tri�ngulo;
Se a2
 == b2
 + c2
 � tri�ngulo ret�ngulo;
Se a2
 > b2
 + c2
 � tri�ngulo obtus�ngulo;
Se a2
 < b2
 + c2
 � tri�ngulo acut�ngulo;
Se a == b == c � tri�ngulo equil�tero;
Se a == b e a != c, se a == c e a != b, e b == c e b != a � tri�ngulo is�sceles;
Se a != b != c � tri�ngulo escaleno;
 Observa��o: um mesmo tri�ngulo pode ser classificado em mais de um tipo. Portanto,
utilizar ifs separados ao inv�s de ifs encadeados.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int val1, val2, val3, a, b, c; //a maior, b meio, c menor

printf("Informe o valor do primeiro lado do tri�ngulo: ");
scanf("%d",&val1);
printf("Informe o valor do segundo lado do tri�ngulo: ");
scanf("%d",&val2);
printf("Informe o valor do terceiro lado do tri�ngulo: ");
scanf("%d",&val3);

    if(val1>val2 && val1>val3)
    {
        a=val1;
    }
    else if(val1>val2 || val1>val3)
    {
        b=val1;
    }
    else
    {
        c=val1;
    }
    if(a==val1)
    {
        if(val2>val3)
        {
            b=val2;
            c=val3;
        }
        else
        {
            c=val2;
            b=val3;
        }
    }
    else if(b==val1)
    {
        if(val2>val3)
        {
            a=val2;
            c=val3;
        }
        else
        {
            a=val3;
            c=val2;
        }
    }
    else if (c==val1)
    {
        if(val2>val3)
        {
            a=val2;
            b=val3;
        }
        else
        {
            a=val3;
            b=val2;
        }
    }
    if (a > (b+c))
    {
        printf("Os valores n�o formam um tri�ngulo\n");
    }
    if((a*a) == (b*b) + (c*c))
    {
        printf("Os valores formam um tri�ngulo ret�ngulo\n");
    }
    if((a*a) > (b*b) + (c*c))
    {
        printf("Os valores formam um tri�ngulo obtus�ngulo\n");
    }
    if((a*a) < (b*b) + (c*c))
    {
        printf("Os valores formam um tri�ngulo acut�ngulo\n");
    }
    if (a==b && b==c && a==c)
    {
        printf("Os valores formam um tri�ngulo equil�tero\n");
    }
    if(a == b && a != c) //Se a == b e a != c, se a == c e a != b, e b == c e b != a � tri�ngulo is�sceles;
    {
        if(a==c && a!=b)
        {
            if(b==c && b != a)
            {
                printf("Os valores formam um tri�ngulo is�sceles\n");
            }
        }
    }
    if(a!=b && b!=c && a!=c)
    {
        printf("Os valores formam um tri�ngulo escaleno\n");
    }
    system("pause");
    return(0);
}
