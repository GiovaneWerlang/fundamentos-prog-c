/*2) Elaborar um programa que efetue a leitura de valores positivos inteiros at� que um
valor negativo seja informado. Ao final devem ser apresentados o maior e o menor valor
informados pelo usu�rio. O valor negativo, a condi��o de sa�da, n�o deve ser considerado
nas compara��es para localizar o maior e o menor.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val=1;
    char primeiro = 'n';
    int maior, menor;

    while(val>=0)
    {

                printf("Informe um valor: ");
                scanf("%d",&val);

                if(primeiro=='n')
                {
                    maior=val;
                    menor=val;
                    primeiro='s';
                }
                else
                    {
                        if(val>=0)
                        {
                            if(val>maior)
                            {
                                maior = val;
                            }
                            if(val<menor)
                            {
                                menor = val;
                            }
                        }
                    }
    }

    printf("Maior: %d\t Menor: %d\n",maior, menor);


    system("pause");
    return(0);
}
