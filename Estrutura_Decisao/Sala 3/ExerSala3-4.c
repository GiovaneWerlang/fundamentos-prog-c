/*4) Faça um programa que leia três valores representando os lados de um triângulo.
Primeiro, coloque esses valores em ordem crescente, em seguida determine e mostre o
tipo de triângulo que esses lados formam de acordo com as seguintes definições. Para
essas definições a é o maior valor, b o do meio e c o menor.
Se a > b + c – valores não formam um triângulo;
Se a2
 == b2
 + c2
 – triângulo retângulo;
Se a2
 > b2
 + c2
 – triângulo obtusângulo;
Se a2
 < b2
 + c2
 – triângulo acutângulo;
Se a == b == c – triângulo equilátero;
Se a == b e a != c, se a == c e a != b, e b == c e b != a – triângulo isósceles;
Se a != b != c – triângulo escaleno;
 Observação: um mesmo triângulo pode ser classificado em mais de um tipo. Portanto,
utilizar ifs separados ao invés de ifs encadeados.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int val1, val2, val3, a, b, c; //a maior, b meio, c menor

printf("Informe o valor do primeiro lado do triângulo: ");
scanf("%d",&val1);
printf("Informe o valor do segundo lado do triângulo: ");
scanf("%d",&val2);
printf("Informe o valor do terceiro lado do triângulo: ");
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
        printf("Os valores não formam um triângulo\n");
    }
    if((a*a) == (b*b) + (c*c))
    {
        printf("Os valores formam um triângulo retângulo\n");
    }
    if((a*a) > (b*b) + (c*c))
    {
        printf("Os valores formam um triângulo obtusângulo\n");
    }
    if((a*a) < (b*b) + (c*c))
    {
        printf("Os valores formam um triângulo acutângulo\n");
    }
    if (a==b && b==c && a==c)
    {
        printf("Os valores formam um triângulo equilátero\n");
    }
    if(a == b && a != c) //Se a == b e a != c, se a == c e a != b, e b == c e b != a – triângulo isósceles;
    {
        if(a==c && a!=b)
        {
            if(b==c && b != a)
            {
                printf("Os valores formam um triângulo isósceles\n");
            }
        }
    }
    if(a!=b && b!=c && a!=c)
    {
        printf("Os valores formam um triângulo escaleno\n");
    }
    system("pause");
    return(0);
}
