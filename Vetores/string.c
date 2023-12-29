#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int size = 20;
    char t[size];


    fgets(t,size,stdin);
    printf("%s\n",t);
}
