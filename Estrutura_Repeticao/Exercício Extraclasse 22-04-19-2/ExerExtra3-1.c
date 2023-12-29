/*1) Ler dois valores que representam os limites de um intervalo. Mostrar os números pares e
divisíveis por 3 desse intervalo em ordem crescente. O usuário pode informar os valores dos
limites do intervalo em ordem crescente ou decrescente. Apresentar 5 valores por linha.
Por exemplo: informados 300 e 2 como limites
Mostrar: 6, 12, 18, 24, 30
 36, 42, 48 ... // são pares e divisíveis por 3 apresentados com cinco valores por linha*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(void)
 {
     int limiteInf, limiteSup, numVal,cont=0;

     printf("Informe um limite: ");
     scanf("%d",&limiteInf);
     printf("Informe outro limite: ");
     scanf("%d",&limiteSup);

     if(limiteInf>limiteSup)
     {
         numVal = limiteSup;
         limiteSup = limiteInf;
         limiteInf = numVal;
     }
    numVal =limiteInf;
    do
    {

        if(numVal%2==0&&numVal%3==0)
        {
            printf("%d\t",numVal);

            cont++;
            if(cont%5==0)
            {
                printf("\n");
            }
        }

        numVal++;
        }while(numVal<=limiteSup);


    printf("\n");
     system("pause");
     return(0);
 }
