/*9) Ler um número e ler um dígito. Contar a quantidade do dígito informado que o número
possui.
Informado 5 como dígito e os números:
55 – possui 2 dígitos cinco;
10 – possui nenhum dígito cinco;
1550 – possui dois dígitos cinco;
50050 – possui dois dígitos cinco;
Repetir o programa enquanto informados valores positivos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, num2, digito,cont=0, uni;

    do{
        printf("Informe um número: ");
        scanf("%d",&num);
        cont=0;
        num2=num;
        if(num>0)
        {
            printf("Informe um dígito: ");
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
