/*5) A figura a seguir representa uma árvore de decisão para identificar se um paciente está
saudável ou doente. Elabore um algoritmo que implementa essa árvore de decisão.

                                    Paciente se sente bem
                            sim                                não
                        saudável                             paciente tem dor
                                                        não                 sim
                                                temperatura do paciente         doente
                                            <=37                  >37
                                        saúdavel                    doente
                                        */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char SN, temp;

    printf("Paciente se sente bem? (s,S,n,N(sim ou não)");
    scanf("%c",&SN);
    if(SN=='s' || SN=='S')
    {
        printf("Paciente está saudável.\n");
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
                printf("Paciente saudável.\n");
            }
        }
    }

    system("pause");
    return(0);
}
