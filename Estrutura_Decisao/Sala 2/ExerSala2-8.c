/*8) Ler um n�mero e utilizando uma estrutura if else if  else if... (obrigatoriamenteencadeada) informar se ele �:
a) divis�vel somente por 5, por 3 ou por 2;
Exemplo: 25 divis�vel somente por 5
b) n�o � divis�vel por nenhum destes;
Exemplo: 7 n�o � divis�vel por 5, 3 ou 2;
c) se � divis�vel por todos eles;
Exemplo: 30 � divis�vel por 2, 3 e 5.
d) se ele � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 � divis�vel somente por 3 e por 5.
Exemplo: 10 � divis�vel somente por 5 e por 2.
Exemplo: 6 � divis�vel somente por 3 e por 2.
Neste exerc�cio faz diferen�a a ordem na qual as compara��es s�o realizadas? Porqu�?*/

#include <stdio.h>
#include <stdlib.h>

int main(void) //primeiro testar todos, em duplas, em unidades, o else ira o nenhum
{
    int num;

    printf("Informe um n�mero: ");
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
            printf("%d n�o � divisivel por nenhum destes\n",num);
        }

    system("pause");
    return(0);
}
