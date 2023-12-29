/*1) Elaborar um programa para ler valores inteiros (incluindo valores positivos e negativos) até
que o valor zero seja informado. O valor zero não deverá ser considerado. Informar o maior e
o menor entre os valores positivos lidos e apresentar a média dos valores negativos
informados.
Obs.: verificar que não sejam realizadas divisões por zero.*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir, primeira;
    int valor, somaN = 0, contN=0, maior=0, menor;// pq se n inicializar valor para maior resultado sai 8000000
    float media;

    do
    {
        system("cls");
        //
        do
        {

                printf("Informe um valor: (0 para sair)");
                scanf("%d",&valor);
                if(valor!=0)
            {
                if(valor>0)
                {
                    if(primeira=='n')
                    {
                        maior = valor;
                        menor = valor;
                        primeira == 's';
                    }
                    else
                    {
                        if(valor>maior)
                        {
                            maior = valor;
                        }
                        if(valor<menor)
                        {
                            menor=valor;
                        }
                    }
                }
                else
                {
                    somaN = somaN + valor;
                    contN++;
                }
            }
        }while(valor!=0);

        printf("Maior e: %d\nMenor e: %d\n",maior,menor);

        if(contN>0)
        {
            media = somaN / (float)contN;
            printf("Media dos negativos: %.2f\n",media);
        }

        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
