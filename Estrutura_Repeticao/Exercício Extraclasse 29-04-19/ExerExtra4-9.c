/*9) Ler um n�mero e ler um d�gito. Contar a quantidade do d�gito informado que o n�mero
possui.
Informado 5 como d�gito e os n�meros:
55 � possui 2 d�gitos cinco;
10 � possui nenhum d�gito cinco;
1550 � possui dois d�gitos cinco;
50050 � possui dois d�gitos cinco;
Repetir o programa enquanto informados valores positivos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, num2, digito,cont=0, uni;

    do{
        printf("Informe um n�mero: ");
        scanf("%d",&num);
        cont=0;
        num2=num;
        if(num>0)
        {
            printf("Informe um d�gito: ");
            scanf("%d",&digito);
            if(digito>0)
            {
                while(num>0)
                {
                    uni = num%10;
                    if(uni==digito)
                    {
                        cont++;
                    }
                    num = num/10;
                }
                printf("%d = possui %d digitos %d\n",num2,cont,digito);
            }
        }

    }while(num2>0);



    system("pause");
    return(0);
}
