/*5 ) Encontrar o maior e o menor de um conjunto de valores informados pelo usu�rio. O valor
0 representa a sa�da e n�o deve ser considerado no restante do processamento.
a) Dos n�meros informados que possuem at� 3 d�gitos verificar se o mesmo possui como
unidade, dezena ou centena um determinado digito (entre 0 e 9) informado pelo usu�rio.
Essa verifica��o deve ser realizada inclusive para o primeiro n�mero informado e para os
positivos ou negativos. Ao ler o d�gito que o usu�rio informar para que seja verificado se o
mesmo � unidade, dezena ou centena dos n�meros informados, validar para que esse valor
esteja entre 0 e 9.
b) Contar quantos valores pares s�o informados. Essa contagem inclui todos os n�meros,
inclusive o primeiro, exceto o zero que � a condi��o de sa�da.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir, primeiro='n';
    int num=1, veri, maior, menor, unidade, dezena, centena, pares;

    do
    {
        system("cls");
        fflush(stdin);
        pares = 0;
        //
        do
        {
            printf("Informe um valor: ");
            scanf("%d",&num);
            if(num!=0)
            {
                if(num%2==0)
                {
                    pares++;
                }
                if(primeiro=='n')
                {
                    maior = num;
                    menor = num;
                    primeiro = 's';
                }
                else
                {
                    if(num>maior)
                    {
                        maior = num;
                    }
                    else if(num<menor)
                    {
                        menor = num;
                    }
                }


                if(num<0&&num>-1000||num>0&&num<1000)
                {
                        do
                    {
                        printf("Informe o n�mero que deseja verificar: ");
                        scanf("%d",&veri);
                    }while(veri<0||veri>9);
                    if(num<0)
                    {
                        num = num * -1;
                    }
                    unidade = num%10;
                    dezena = num%100/10;
                    centena = num/100;
                    if(unidade==veri)
                    {
                        printf("Unidade do valor informado.\n");
                    }
                    if(dezena==veri)
                    {
                        printf("Dezena do valor.\n");
                    }
                    if(centena==veri)
                    {
                        printf("Centena do valor.\n");
                    }
                }
            }
        }while(num!=0);

        printf("Maior valor dentre os informados �: %d\nE o Menor �: %d\n",maior, menor);

        if(pares>0)
        {
            printf("N�mero de pares informado: %d\n",pares);
        }

        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}

