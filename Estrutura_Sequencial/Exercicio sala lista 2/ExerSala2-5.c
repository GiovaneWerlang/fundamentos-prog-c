/*5) Escreva um algoritmo para ler o n�mero de votos brancos, nulos (incluem eleitores ausentes)
e v�lidos de uma elei��o. Calcular e mostrar o percentual que
cada   um(brancos, nulos e v�lidos) representa em rela��o ao total de eleitores.
Lembrar que osvalores dos percentuais podem n�o ser inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis
    int branco, nulo, valido;
    float porcentagem;

    //entrada
    printf("Informe a quantidade de votos brancos: ");
    scanf("%d",&branco);
    printf("Informe a quantidade de votos nulos: ");
    scanf("%d",&nulo);
    printf("Informe a quantidade de votos validos: ");
    scanf("%d",&valido);

    porcentagem = ((float)branco * 100) /  (branco + nulo + valido);
    printf("Os votos brancos equivalem a %f %% do total de eleitores\n",porcentagem);
    porcentagem = ((float)nulo * 100) /  (branco + nulo + valido);
    printf("Os votos nulos equivalem a %f %% do total de eleitores\n",porcentagem);
    porcentagem = ((float)valido * 100) /  (branco + nulo + valido);
    printf("Os votos validos equivalem a %f %% do total de eleitores\n",porcentagem);

    system("pause");
    return(0);
}
