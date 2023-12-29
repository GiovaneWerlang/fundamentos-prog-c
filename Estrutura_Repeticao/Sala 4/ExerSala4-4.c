/*4) Ler  números informados pelo usuário. Parar a leitura quando informado o número
zero que não deve ser considerado. Fazer a média dos valores negativos informados. Dos
valores positivos contar quantos são ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num=1;
    int cont=0;
    int imp=0;
    float media=0;

    do{
    if(num!=0)
    {
        printf("Informe um número: ");
        scanf("%d",&num);
        if(num>0)
        {
            if(num%2!=0)
            {
                imp++;
            }
        }
        else
        {
            cont++;
            media = media + num;
        }

    }
    }while(num!=0);

    media = media/(float)cont;
    printf("Média dos negativos: %.2f\nQuantidade de ímpares: %d.\n",media,imp);

    system("pause");
    return(0);
}
