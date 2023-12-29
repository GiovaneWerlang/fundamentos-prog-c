/*13) Calcule e mostre a média de idade de três pessoas (você e mais dois colegas de
classe).*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int idade1, idade2, idade3;
    float media;

    //entrada
    printf("Insira a primeira idade: ");
    scanf("%d",&idade1);
    printf("Insira a segunda idade: ");
    scanf("%d",&idade2);
    printf("Insira a terceira idade: ");
    scanf("%d",&idade3);

    //processamento
    media = ((float)idade1 + idade2 + idade3) / 3;

    //saida
    printf("A media das idades e de: %.2f\n",media);

    system("pause");
    return(0);
}
