/*6) Complete o c�digo a seguir para:
a) Ler a quantidade somente se o valor � v�lido, ou seja, maior que zero.
b) Garantir que a m�dia seja float e que n�o seja realizada divis�o por zero.
c) Repetir enquanto informado um valor v�lido para a quantidade.*/

#include <stdio.h>
#include <stdlib.h>
/*Ler o valor de um produto e a quantidade.
 Somente ler a quantidade se o valor � v�lido.
 Calcular a m�dia final, float, e apresent�-las ap�s lidas todas as
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
    printf("M�dia geral (de todas as entradas): %.2f\n",media);

    system("pause");
    return(0);
}
