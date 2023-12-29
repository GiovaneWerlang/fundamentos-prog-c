/*7) Em uma determinada cidade, sabe-se que, de janeiro a abril de um determinado ano (121
dias), a temperatura ficou entre a 5� e 45�. Gerar um vetor com valores rand�micos nesse
intervalo para esse per�odo de tempo. Fazer uma fun��o para gerar vetores de tamanho e com
dentro de limites informados. A partir do vetor gerado, obtenha e mostre:
a) a menor temperatura ocorrida;
b) a maior temperatura ocorrida;
c) a temperatura m�dia;
d) o n�mero de dias em que a temperatura foi inferior � temperatura m�dia.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetores.h"

int main(void)
{
    char repetir, primeiro = 'n';
    int vetorT[121];
    int i;
    int maior=0, menor=0;
    int contI=0;
    int contM=0;
    float media=0;

    do
    {
        system("cls");
        //
            gerarVetorIntervalo(vetorT,121,5,45);
            for(i=0;i<121;i++)
            {
                contI = contI + vetorT[i];
                media++;
                if(primeiro == 'n')
                {
                    maior = vetorT[i];
                    menor = vetorT[i];
                    primeiro = 's';
                }
                else if(vetorT[i]>maior)
                {
                    maior = vetorT[i];
                }
                else if(vetorT[i]<menor)
                {
                    menor = vetorT[i];
                }
            }
            printf("\nMenor temperatura: %d",menor);
            printf("\nMaior temperatura: %d",maior);
            if(media>0)
            {
                media = contI/media;
                printf("\nMedia: %.2f",media);
            }
            for(i=0;i<121;i++)
            {
                if(vetorT[i]<media)
                {
                    contM++;
                }
            }
            printf("\nN�mero de dias com temperatura inferior a m�dia: %d",contM);

        printf("\nExecutar novamente (s/S para sim)? ");
        fflush(stdin);
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    system("pause");
    return(0);
}
