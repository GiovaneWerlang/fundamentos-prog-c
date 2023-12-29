/*6) Complete o código a seguir para:
a) Ler a quantidade somente se o valor é válido, ou seja, maior que zero.
b) Garantir que a média seja float e que não seja realizada divisão por zero.
c) Repetir enquanto informado um valor válido para a quantidade.*/

#include <stdio.h>
#include <stdlib.h>
/*Ler o valor de um produto e a quantidade.
 Somente ler a quantidade se o valor é válido.
 Calcular a média final, float, e apresentá-las após lidas todas as
entradas.*/

int main(void)
{
 //char categoria;
 int quantidade;
 float valor;
 int soma=0;
 int qtde=0;
 float media;

 do
 {
    printf("Informe o valor: ");
    scanf("%f",&valor);
         if(valor>0)
         {
             printf("Informe a quantidade: ");
             scanf("%d",&quantidade);
                 if(quantidade>0)
                 {
                     soma = soma + (valor * quantidade);
                     qtde++;
                 }
         }

 }while(quantidade > 0);

    media = soma / (float)qtde;
    printf("Média geral (de todas as entradas): %.2f\n",media);

    system("pause");
    return(0);
}
