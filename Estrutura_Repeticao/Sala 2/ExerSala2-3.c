/*3)Apresentar o quadrado dos n�meros divis�veis por 3 e a raiz quadrada dos
n�meros positivos e divis�veis por 5 ou por 7 entre 0 a 100. Apresentar em listagens separadas:
uma para os quadrados e outra para as ra�zes quadradas.Colocar um cabe�alho antes de cada
listagem de maneira a identificar o conte�do da mesma. Em cada listagem separar os n�meros por uma tabula��o.
A raiz quadrada pode ser obtida pela fun��o sqrt () que est� na biblioteca<math.h>*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int quadrado3;
    int quadrado57;
    int i;
    quadrado3 = 0;
    quadrado57 = 0;

    printf("Quadrado dos n�meros divis�veis por 3\n");
    for(i=0;i<=100;i++)
    {
        if(i%3==0)
        {
            quadrado3 = i * i;
            printf("%d\t",quadrado3);
        }

    }
    printf("\n\nRaiz quadrada dos n�meros divis�veis por 5 ou por 7\n");
    for(i=0;i<=100;i++)
    {
        if(i%5==0 || i % 7 == 0)
        {
            quadrado57 = sqrt(i);
            printf("%d\t",quadrado57);
        }
    }
    system("pause");
    return(0);
}
