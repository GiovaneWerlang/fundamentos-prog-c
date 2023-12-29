/*11) Implemente um algoritmo que encontre o n (exemplo quinto) número maior que z, que seja
divisível por x e não y. n, z, x e y são informados pelo usuário e devem ser validados. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir;
    int n, z, y, x, cont=0, i;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe o enésimo número mair que z( n ): ");
            scanf("%d",&n);
        }while(n<=0);

        do
        {
            printf("Informe o valor de z: ");
            scanf("%d",&z);
        }while(z<=0);

        do
        {
            printf("Qual o primeiro divisor (x): ");
            scanf("%d",&x);
        }while(x<=0);

        do
        {
            printf("Qual o não divisor (y): ");
            scanf("%d",&y);
        }while(y<=0);

        for(i=n;cont<5;i++)
        {
            if(i%x==0 && i%y!=0)
            {
                cont++;
            }
        }
        printf("Quinto número maior que %d divisivel por %d e não divisivel por %d é: %d",z,x,y,i);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
