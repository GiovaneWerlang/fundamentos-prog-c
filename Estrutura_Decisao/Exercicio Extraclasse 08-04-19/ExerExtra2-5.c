/*5) A figura a seguir representa uma �rvore de decis�o para identificar se um paciente est�
saud�vel ou doente. Elabore um algoritmo que implementa essa �rvore de decis�o.

                                    Paciente se sente bem
                            sim                                n�o
                        saud�vel                             paciente tem dor
                                                        n�o                 sim
                                                temperatura do paciente         doente
                                            <=37                  >37
                                        sa�davel                    doente
                                        */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char SN, temp;

    printf("Paciente se sente bem? (s,S,n,N(sim ou n�o)");
    scanf("%c",&SN);
    if(SN=='s' || SN=='S')
    {
        printf("Paciente est� saud�vel.\n");
    }
    else if(SN=='n' || SN=='N')
    {
        printf("Paciente tem dor? ");
        fflush(stdin);
        scanf("%c",&SN);
        if(SN=='s' || SN=='S')
        {
            printf("Paciente doente.\n");
        }
        else if(SN=='n' || SN=='N')
        {
            printf("Qual a temperatura do paciente? (em Celsius)");
            scanf("%d",&temp);
            if(temp>37)
            {
                printf("Paciente doente.\n");
            }
            else
            {
                printf("Paciente saud�vel.\n");
            }
        }
    }

    system("pause");
    return(0);
}
