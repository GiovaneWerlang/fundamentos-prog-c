/*4) Existem normas para determinar a pot�ncia de ilumina��o por metro quadrado de uma
resid�ncia que � determinada pela utiliza��o do c�modo, de acordo com a tabela seguinte:
Utiliza��o            Classe Pot�ncia (por m2)
Quarto                  A     15
Sala de tv              A     15
Sala de estar e jantar  B     18
Cozinha                 B     18
Escrit�rio              C     20
Banheiro                C     20

Elaborar um programa para calcular a quantidade de l�mpadas para uma resid�ncia,
independentemente da quantidade e do tipo de c�modos. A casa pode ter v�rios quartos, salas
e etc.
Ler a classe do c�modo e as suas duas dimens�es. Calcular a quantidade de l�mpadas
necess�rias de acordo com a tabela anterior. Suponha quer ser�o utilizadas somente l�mpadas
de 60 wats. Ao final informar a quantidade total de l�mpadas necess�rias.
Estabele�a uma condi��o para finalizar a leitura dos dados de entrada. Exemplo:
a) uma classe inv�lida. Nesse caso, quando informada uma classe inv�lida, n�o devem ser
lidas as dimens�es do c�modo.
b) ler, inicialmente, a quantidade de c�modos.
Observa��o: Aten��o o n�mero total de l�mpadas informado dever� ser inteiro. E lembre-se
que cada c�modo utilizar� um n�mero inteiro de l�mpadas.*/

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


    printf("Infome a quantidade de c�modos: ");
    scanf("%d", &qtdComodos);
    fflush(stdin);

    for(i=i;qtdComodos>=0;i++)
    {

        printf("Informe a classe: (A/B/C)");
        scanf("%c",&classe);
        fflush(stdin);
        printf("Informe as dimens�es do c�modo: (em M, (A/L)");
        scanf("%d/%d",&dimensaoA,&dimensaoL);
        fflush(stdin);
        for(;dimensaoA<=0||dimensaoL<=0;)
        {
            printf("Dimens�es inv�lidas.\n");
            return(0);
        }
        for(;classe!='A' && classe!='B' && classe!='C';)
        {
            printf("Classe inv�lida.\n");
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
    printf("Quantidade inv�lida.\n");
    return(0);



    system("pause");
    return(0);
}

