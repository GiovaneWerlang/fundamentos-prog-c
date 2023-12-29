/*8) Elaborar um programa para ler valores inteiros (incluindo valores positivos e
negativos) até que o valor zero seja informado. O valor zero não deverá ser considerado
nas verificações. Informar o maior e o menor entre os valores positivos lidos e apresentar
a média dos valores negativos informados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char primeiro = 'n';
    int num, maior, menor, contN=0;
    float media=0;

    do
    {
        printf("Insira um valor(0 para sair): ");
        scanf("%d",&num);
        if(num>0)
        {
            if(primeiro == 'n')
            {
                maior = num;
                menor = num;
                primeiro = 's';
            }
            else if(num>maior)
            {
                maior = num;
            }
            else if(num<menor)
            {
                menor = num;
            }
        }
        else if(num<0)
        {
            media = media + num;
            contN++;
        }

    }while(num!=0);

    printf("O maior entre os valores: %d\nO menor entre os valores: %d\n",maior, menor);

    if(contN>0)
    {
        media = media / (float)contN;
        printf("Média dos negativos: %.2f\n",media);
    }


    system("pause");
    return(0);
}
