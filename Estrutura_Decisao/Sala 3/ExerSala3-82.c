/*8)  Uma �rvore de decis�o obt�m a decis�o pela execu��o de uma sequ�ncia de testes.
Cada n� interno da �rvore corresponde a um teste do valor de uma das propriedades e os
ramos deste n� s�o identificados com os poss�veis valores do teste. Cada n� folha da
�rvore especifica o valor de retorno se a folha for atingida.
8.2) Considera-se o problema de esperar para jantar em um restaurante. O objetivo � o
algoritmo aprender a defini��o para DeveEsperar. Os atributos dispon�veis para
descrever exemplos de poss�veis casos do dom�nio s�o: alternar de restaurante, ir para um
bar, dia sa semana, estar com fome, n�mero de fregueses,  clima, se foi feita reserva,estimativa de espera.
Implemente um algoritmo para a �rvore de decis�o da Figura aseguir.
As entradas s�o do tipo char, exceto o tempo de espera que pode ser int.
Portanto,estabele�a uma letra para cada entrada esperada, por exemplo 'S' para sim, 'N' para n�o.
                                                    Fregueses
                                Nenhum              Alguns              Cheio
                            N�o                     Sim                 Esperar?
                                                            >60    30-60                     10-30               0-10
                                                        N�o         Alternar?               Com fome?             Sim
                                                                N�o         Sim
                                                            Reserva?       Sex/Sab        Sim        Alternar?
                                                    Bar?        Sim     N�o     Sim              N�o         Chovendo?
                                                N�o     Sim                                                 N�o      Sim */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tempo;
    char SN;

    printf("O restaurante tem quantos fregueses? \nformato(N,A,C)(Nenhum,Alguns,Cheio)");
    scanf("%c",&SN);
    fflush(stdin);
    if(SN!='N'&& SN!='A'&& SN!='C')
    {
        printf("Entrada inv�lida\n");
    }
    else if(SN == 'N')
    {
        printf("N�o precisa esperar\n");
    }
    else if(SN == 'A')
    {
        printf("N�o precisa esperar\n");
    }
    else if(SN == 'C')
    {
        printf("Quanto tempo tera de esperar? (em minutos)");
        scanf("%d",&tempo);
        fflush(stdin);
        if(tempo>60)
        {
            printf("N�o vai esperar\n");
        }
        else if(tempo<10&&tempo>=0)
        {
            printf("Pode esperar\n");
        }
        else if(tempo>=10&&tempo<30)
        {
            printf("Est� com fome?: (formato S/N)");
            scanf("%c",&SN);
            fflush(stdin);
            if(SN=='S')
            {
                printf("Pode esperar\n");
            }
            else if(SN=='N')
            {
                printf("Prefere alternar? (formato (S/N)");
                scanf("%c",&SN);
                fflush(stdin);
                if(SN=='N')
                {
                    printf("Pode esperar\n");
                }
                else if(SN=='S')
                {
                    printf("Est� chovendo? (formato (S/N)");
                    scanf("%c",&SN);
                    fflush(stdin);
                    if(SN=='N')
                    {
                        printf("Alternar\n");
                    }
                    else if(SN=='S')
                    {
                        printf("Esperar parar de chover\n");
                    }
                }
            }
        }
        else if(tempo>=30&&tempo<=60)
        {
            printf("Alternar?");
            scanf("%c",&SN);
            fflush(stdin);
            if(SN=='S')
            {
                printf("Sex\Sab?");
                scanf("%c",&SN);
                fflush(stdin);
                if(SN=='N')
                {
                    printf("N�o\n");
                }
                else if(SN=='S')
                {
                    printf("Sim\n");
                }
            }
            else if(SN=='N')
            {
                printf("Tem reserva?");
                scanf("%c",&SN);
                fflush(stdin);
                if(SN=='S')
                {
                    printf("Fica\n");
                }
                else if(SN=='N')
                {
                    printf("Bar?");
                    scanf("%c",&SN);
                    fflush(stdin);
                    if(SN=='S')
                    {
                        printf("Vai ao bar\n");
                    }
                    else if(SN=='N')
                    {
                        printf("N�o vai ao bar\n");
                    }
                }
            }
        }
    }

    system("pause");
    return(0);
}
