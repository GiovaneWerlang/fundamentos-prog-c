/*4) Ler  n�meros informados pelo usu�rio. Parar a leitura quando informado o n�mero
zero que n�o deve ser considerado. Fazer a m�dia dos valores negativos informados. Dos
valores positivos contar quantos s�o �mpares.*/

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
        printf("Informe um n�mero: ");
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
    printf("M�dia dos negativos: %.2f\nQuantidade de �mpares: %d.\n",media,imp);

    system("pause");
    return(0);
}
