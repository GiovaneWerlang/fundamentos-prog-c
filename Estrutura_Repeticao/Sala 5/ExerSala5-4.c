/*4) Escreva um programa que determine o valor de S, com n informado pelo usu�rio, da
s�rie S = 1/1 � 2/4 + 3/9 � n / n^2. Para n = 10:

S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 + ... - 10/100.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float s=0;
    int num;
    int cont=1;

    printf("Informe o n�mero da s�rie: ");
    scanf("%d",&num);
    do{

        if(cont%2!=0)
        {
            s = s + (float)cont/(cont * cont); //((int)pow(cont,2));
        }
        else//(cont%2==0)
        {
            s = s - (float)cont/ (cont * cont);//((int)pow(cont,2));
        }
        cont++;
    }while(cont<=num);

    printf("S == %.2f",s);



    system("pause");
    return(0);
}
