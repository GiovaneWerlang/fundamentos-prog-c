/*4) Existem normas para determinar a potência de iluminação por metro quadrado de uma
residência que é determinada pela utilização do cômodo, de acordo com a tabela seguinte:
Utilização            Classe Potência (por m2)
Quarto                  A     15
Sala de tv              A     15
Sala de estar e jantar  B     18
Cozinha                 B     18
Escritório              C     20
Banheiro                C     20

Elaborar um programa para calcular a quantidade de lâmpadas para uma residência,
independentemente da quantidade e do tipo de cômodos. A casa pode ter vários quartos, salas
e etc.
Ler a classe do cômodo e as suas duas dimensões. Calcular a quantidade de lâmpadas
necessárias de acordo com a tabela anterior. Suponha quer serão utilizadas somente lâmpadas
de 60 wats. Ao final informar a quantidade total de lâmpadas necessárias.
Estabeleça uma condição para finalizar a leitura dos dados de entrada. Exemplo:
a) uma classe inválida. Nesse caso, quando informada uma classe inválida, não devem ser
lidas as dimensões do cômodo.
b) ler, inicialmente, a quantidade de cômodos.
Observação: Atenção o número total de lâmpadas informado deverá ser inteiro. E lembre-se
que cada cômodo utilizará um número inteiro de lâmpadas.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char classe;
    int potencia;
    int dimensaoA,dimensaoL;
    int qtdComodos;
    float qtdLamp;
    int lampadas;
    int i;


    printf("Infome a quantidade de cômodos: ");
    scanf("%d", &qtdComodos);
    fflush(stdin);

    for(i=i;qtdComodos>=0;i++)
    {

        printf("Informe a classe: (A/B/C)");
        scanf("%c",&classe);
        fflush(stdin);
        printf("Informe as dimensões do cômodo: (em M, (A/L)");
        scanf("%d/%d",&dimensaoA,&dimensaoL);
        fflush(stdin);
        for(;dimensaoA<=0||dimensaoL<=0;)
        {
            printf("Dimensões inválidas.\n");
            return(0);
        }
        for(;classe!='A' && classe!='B' && classe!='C';)
        {
            printf("Classe inválida.\n");
            return(0);
        }

        for(;classe == 'A';)
        {
            potencia = 15;
            break;
        }
        for(;classe == 'B';)
        {
            potencia = 18;
            break;
        }
        for(;classe == 'C';)
        {
            potencia = 20;
            break;
        }
        qtdLamp = ((dimensaoA * dimensaoL) * potencia) / (float)60;
        lampadas = qtdLamp+0.999999;
        printf("A quantidade de lampadas necessaria e: %d\n",lampadas);
    }
    printf("Quantidade inválida.\n");
    return(0);



    system("pause");
    return(0);
}

