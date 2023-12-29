/*7) Ler 10 número e contar desses quantos são pares, quantos são ímpares e quantos são
divisíveis por 7 ou por sete. Apresentar essas quantidades.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nums[10];
    int num;
    int i;
    int soma;
    soma = 0;
    num = 0;
    nums[1] = 0;
    for(i=1;i<=10;i++)
    {
        printf("Informe um número: ");
        scanf("%d",&nums[i]);
    }
    for(i=1;i<=10;i++)
    {
        if(nums[i]%2==0)
        {
            printf("P %d\t",nums[i]);
        }
        if(nums[i]%2!=0)
        {
            printf("I %d\t",nums[i]);
        }
        if(nums[i]%7==0)
        {
            printf("D7 %d\t",nums[i]);
        }

    }
    system("pause");
    return(0);
}
