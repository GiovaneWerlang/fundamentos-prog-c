/*11) Ler um n�mero inteiro e determinar se o mesmo � primo. Um n�mero � primo
quando � divis�vel de maneira exata somente por 1 e por ele mesmo.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int qtde =0;
    int i;

    printf("Informe um n�mero: ");
    scanf("%d",&num);
    /*Ideia: dividir de 2 at� a metade do n�mero. Se n�o encotrarmos divis�es
    exatas o n�mero � primo. Sair na primeira divis�o exata*/

    for(i=2;i<=num/2;i++) //x=sqrt(x)  ;i<=x;
    {
        if(num%i==0)
        {
            qtde++;
            i=num; //break; For�ar a sa�da do for
        }
    }
    if(qtde ==0)
    {
        printf("%d � primo\n",num);
    }
    else
    {
        printf("%d n�o � primo\n",num);
    }

    system("pause");
    return(0);
}
