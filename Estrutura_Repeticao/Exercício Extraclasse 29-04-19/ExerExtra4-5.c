/*5) Completar e corrigir o código a seguir para:
a) Ler a quantidade somente se a categoria é válida.
b) Validar para que não seja realizada uma divisão por zero no cálculo da média.
c) Permitir a leitura da categoria nas execuções sucessivas do programa.
d) Garantir que a média seja float*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 char Categoria;
 int Quantidade;
 int Soma=0;
 int Total=0;
 float Media;
 do
 {
    printf("Informe a categoria: ");
    scanf("%c",&Categoria);
    fflush(stdin);

    if(Categoria == 'A'||Categoria =='B')
    {
        printf("Informe a quantidade: ");
        scanf("%d",&Quantidade);
        fflush(stdin);
        Total = Total + Quantidade;
        Soma++;
    }
 }while(Categoria == 'A' || Categoria == 'B');

if(Quantidade!=0)
{
    Media = Total/ (float)Soma;

}
    printf("A média dos produtos é %.2f\n",Media);

 system("pause");
 return(0);
}

