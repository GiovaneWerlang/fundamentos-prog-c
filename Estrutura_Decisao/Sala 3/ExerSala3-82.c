/*8)  Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes.
Cada nó interno da árvore corresponde a um teste do valor de uma das propriedades e os
ramos deste nó são identificados com os possíveis valores do teste. Cada nó folha da
árvore especifica o valor de retorno se a folha for atingida.
8.2) Considera-se o problema de esperar para jantar em um restaurante. O objetivo é o
algoritmo aprender a definição para DeveEsperar. Os atributos disponíveis para
descrever exemplos de possíveis casos do domínio são: alternar de restaurante, ir para um
bar, dia sa semana, estar com fome, número de fregueses,  clima, se foi feita reserva,estimativa de espera.
Implemente um algoritmo para a árvore de decisão da Figura aseguir.
As entradas são do tipo char, exceto o tempo de espera que pode ser int.
Portanto,estabeleça uma letra para cada entrada esperada, por exemplo 'S' para sim, 'N' para não.
                                                    Fregueses
                                Nenhum              Alguns              Cheio
                            Não                     Sim                 Esperar?
                                                            >60    30-60                     10-30               0-10
                                                        Não         Alternar?               Com fome?             Sim
                                                                Não         Sim
                                                            Reserva?       Sex/Sab        Sim        Alternar?
                                                    Bar?        Sim     Não     Sim              Não         Chovendo?
                                                Não     Sim                                                 Não      Sim */

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
        printf("Entrada inválida\n");
    }
    else if(SN == 'N')
    {
        printf("Não precisa esperar\n");
    }
    else if(SN == 'A')
    {
        printf("Não precisa esperar\n");
    }
    else if(SN == 'C')
    {
        printf("Quanto tempo tera de esperar? (em minutos)");
        scanf("%d",&tempo);
        fflush(stdin);
        if(tempo>60)
        {
            printf("Não vai esperar\n");
        }
        else if(tempo<10&&tempo>=0)
        {
            printf("Pode esperar\n");
        }
        else if(tempo>=10&&tempo<30)
        {
            printf("Está com fome?: (formato S/N)");
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
                    printf("Está chovendo? (formato (S/N)");
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
                    printf("Não\n");
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
                        printf("Não vai ao bar\n");
                    }
                }
            }
        }
    }

    system("pause");
    return(0);
}
