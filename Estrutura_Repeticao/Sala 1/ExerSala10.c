/*10) Uma indústria fabrica roupas categorizadas em masculinas, femininas e infantis. Ler
a categoria (M, F ou I) e a respectiva quantidade. Calcular:
    a) O total de produtos por categoria;
    b) O percentual de produtos da categoria infantil;
    Validar para que seja informada uma categoria válida. Finalizar a leitura quando
    informado um valor negativo para a quantidade. Ler inicialmente a quantidade e depois a
    categoria. Se informada uma quantidade negativa não ler a categoria.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char categoria;
    int quantidade;
    int totalI=0;
    int totalM=0;
    int totalF=0;
    float percentual;
    int totalGeral;

    do{
        printf("Informe a quantidade (valor 0 ou negativo para sair): ");
        scanf("%d",&quantidade);
        if(quantidade > 0)
        {
            do
            {
                printf("Informe a categoria (m/f/i)");
                fflush(stdin);
                scanf("%c",&categoria);
            }while(categoria != 'f' && categoria != 'm' && categoria != 'i');//enquanto cat inválida
            if(categoria == 'm')
            {
                totalM = totalM + quantidade;
            }
            else if(categoria == 'f')
            {
                totalF = totalF + quantidade;
            }
            else
            {
                totalI = totalI + quantidade;
            }
        }

    }while(quantidade > 0);// se iremos repetir
    totalGeral = totalF + totalM + totalI;
    if(totalGeral > 0)
    {
        percentual = totalI * 100/totalGeral;
        printf("Percentual de infantil: %.2f\n",percentual);
    }
    printf("Total infantil: %d, masculino: %d e feminino: %d\n",totalI, totalM, totalF);

    system("pause");
    return(0);
}

