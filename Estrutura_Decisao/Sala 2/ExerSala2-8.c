/*8) Ler um número e utilizando uma estrutura if else if  else if... (obrigatoriamenteencadeada) informar se ele é:
a) divisível somente por 5, por 3 ou por 2;
Exemplo: 25 divisível somente por 5
b) não é divisível por nenhum destes;
Exemplo: 7 não é divisível por 5, 3 ou 2;
c) se é divisível por todos eles;
Exemplo: 30 é divisível por 2, 3 e 5.
d) se ele é divisível somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 é divisível somente por 3 e por 5.
Exemplo: 10 é divisível somente por 5 e por 2.
Exemplo: 6 é divisível somente por 3 e por 2.
Neste exercício faz diferença a ordem na qual as comparações são realizadas? Porquê?*/

#include <stdio.h>
#include <stdlib.h>

int main(void) //primeiro testar todos, em duplas, em unidades, o else ira o nenhum
{
    int num;

    printf("Informe um número: ");
    scanf("%d",&num);

    if(num% 5 ==0 && num%3 ==0 && num%2 ==0)
    {
        printf("%d e divisivel por todos\n",num);
    }
    else if(num%2==0 && num%3==0 && num%5!=0)
    {
        printf("%d e divisivel por 2 e 3\n",num);
    }
    else if (num%2 !=0 && num%3 ==0 && num%5 ==0)
    {
        printf("%d e divisivel por 3 e 5\n",num);
    }
    else if (num%2 ==0 && num%3 !=0 && num%5 ==0)
    {
        printf("%d e divisivel por 2 e 5\n",num);
    }

    else if(num%5 != 0 && num%3 !=0 && num%2 ==0)
        {
            printf("%d divisivel somente por 2\n",num);
        }
    else if(num%5 != 0 && num%3 == 0 && num%2 !=0)
    {
        printf("%d divisivel somente por 3\n",num);
    }
    else if(num%5 == 0 && num%3 != 0 && num%2 !=0)
    {
        printf("%d divisivel somente por 5\n",num);
    }
    else
        {
            printf("%d não é divisivel por nenhum destes\n",num);
        }

    system("pause");
    return(0);
}
