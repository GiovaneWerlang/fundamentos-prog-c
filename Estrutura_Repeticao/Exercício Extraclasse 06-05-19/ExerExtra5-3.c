/*3) Faça um algoritmo que leia vários números e informe quantos desses números entre
100 e 200 foram digitados. Fazer a média dos ímpares informados. Quando o valor 0
(zero) for lido o algoritmo deverá cessar sua execução e não deve ser considerado nos
cálculos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, intervalo=0, cont=0;
    float media=0;

    do{
        printf("Informe um número: ");
        scanf("%d",&num);
        if(num>0)
        {
            if(num>=100&&num<=200)
            {
                intervalo++;
            }
            if(num%2!=0)
            {
                media = media + num;
                cont++;
            }
        }
    }while(num!=0);

    printf("Números dentro do intervalo 100 e 200: %d\n",intervalo);

    if(cont>0)
    {
        media = media/(float)cont;
        printf("Media dos ímpares: %.2f\n",media);
    }

    system("pause");
    return(0);
}
