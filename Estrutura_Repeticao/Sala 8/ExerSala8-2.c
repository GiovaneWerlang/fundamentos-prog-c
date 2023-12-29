/*2) Ler a idade, o tipo (E estudante e P professor) de cinco pessoas. Se o tipo for professor
solicitar o sal�rio. Fazer a m�dia dos sal�rios informados. Se o tipo for estudante solicitar se o
mesmo recebe mesada. Contar quantos recebem e quantos n�o recebem mesada. Garantir que
o usu�rio informe uma idade v�lida, ou seja, positiva, que o tipo seja E ou P e que recebe
mesada seja S ou N. Validar essas entradas. Isso no sentido de ficar solicitando essas entradas
at� que sejam v�lidas. Validar para que n�o seja realizada uma divis�o por zero.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char repetir,tipo, mesada;
    int idade, contS=0, mesadaS=0,mesadaN=0,i;
    float salario, media=0;


    do
    {
        system("cls");

        for(i=1;i<=5;i++)
        {
            do
            {
                printf("Informe a idade: ");
                scanf("%d",&idade);
            }while(idade<=0);
            do
            {
                printf("Estudante ou professor? ");
                fflush(stdin);
                scanf("%c",&tipo);
                if(tipo=='p'||tipo=='P')
                {
                    do
                    {
                    printf("Informe o sal�rio: ");
                    scanf("%f",&salario);
                    }while(salario<0);
                    media = media + salario;
                    contS++;
                }
                if(tipo=='e'||tipo=='E')
                {
                    do
                    {
                    printf("Recebe mesada? ");
                    fflush(stdin);
                    scanf("%c",&mesada);
                    }while(mesada!='s'&&mesada!='S'&&mesada!='n'&&mesada!='N');
                    if(mesada=='s'||mesada=='S')
                    {
                        mesadaS++;
                    }
                    else
                    {
                        mesadaN++;
                    }
                }
            }while(tipo!='e'&&tipo!='E'&&tipo!='P'&&tipo!='p');
        }
        printf("%d estudante(s) recebem mesada e %d estudante(s) n�o recebem. \n",mesadaS,mesadaN);

        if(contS>0)
        {
            media = media / (float)contS;
            printf("A m�dia dos sal�rios dos professsores �: %.2f\n",media);
        }
        else
        {
            printf("A m�dia dos sal�rios dos professsores �: %.2f\n",media);
        }

        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
