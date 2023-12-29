/*4) Ler o g�nero (F ou f para feminino, M ou m para masculino. Para qualquer outro
caractere informar que n�o h� f�rmula dispon�vel e finalizar o programa). Se
informado um caractere v�lido, ler a altura da pessoa e calcular seu peso ideal,
utilizando as seguintes f�rmulas:
a) para homens: (72,7 * h) - 58;
b) para mulheres: (62,1 * h) - 44,7.
Observa��o, para ler caractere e comparar vari�vel do tipo caractere:char
Pessoa;scanf(�%c�,&Pessoa);if (Pessoa == �f� || Pessoa == �F�)*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char genero;
    float altura;
    float peso;

    printf("Informe a altura em metros: ");
    scanf("%f",&altura);
    printf("Informe o genero: (formate F/f/M/m)"); //se for ler char, e tiver lido algo antes tem de limpar o buffer
    fflush(stdin); //limpar o buffer do teclado
    scanf("%c",&genero);

    if(genero == 'm' || genero == 'M')
    {
        peso = (62.1 * altura) - 44.7;
    }
    else if(genero == 'F' || genero == 'f')
    {
        peso = (72.7 * altura) - 58;
    }
    else
    {
        printf("Caractere inv�lido para o g�nero\n");
    }
    printf("O peso ideal e %.2f\n",peso);

    system("pause");
    return(0);
}
