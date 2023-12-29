/*11) Ler um número inteiro e determinar se o mesmo é primo. Um número é primo
quando é divisível de maneira exata somente por 1 e por ele mesmo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int qtde =0;
    int i;

    printf("Informe um número: ");
    scanf("%d",&num);
    /*Ideia: dividir de 2 até a metade do número. Se não encotrarmos divisões
    exatas o número é primo. Sair na primeira divisão exata*/

    for(i=2;i<=num/2;i++) //x=sqrt(x)  ;i<=x;
    {
        if(num%i==0)
        {
            qtde++;
            i=num; //break; Forçar a saída do for
        }
    }
    if(qtde ==0)
    {
        printf("%d é primo\n",num);
    }
    else
    {
        printf("%d não é primo\n",num);
    }

    system("pause");
    return(0);
}
