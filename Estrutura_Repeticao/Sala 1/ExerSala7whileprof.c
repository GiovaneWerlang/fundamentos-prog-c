/*7) Ler uma série de números indicados pelo usuário até ser informado o valor zero.
Encontrar e mostrar o maior e o menor entre valores informados.
O valor 0 indica o final da leitura e não deve ser considerado.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int maior, menor;
    char primeiro='n'; //identificar se o primeiro valor já foi informado

    do
    {
        printf("Informe um valor(zero para sair):");
        scanf("%d",&num);
        if(num!=0)//podemos processar
        {
            if(primeiro =='n') //primeiro valor sendo informado
            {
                maior = num;//atribuir para maior
                menor = num;
                primeiro = 's';
            }
            else //2o,3o,4o,5o valor sendo informado, comparar
            {
                if(num > maior)//comparar
                {
                    maior = num;
                }
                else if(num < menor)
                {
                    menor = num;
                }
            }
        }

    }while(num!=0);
    if(primeiro == 's');
    {
        printf("Maior: %d e Menor: %d\n",maior,menor);
    }

    system("pause");
    return(0);
}
