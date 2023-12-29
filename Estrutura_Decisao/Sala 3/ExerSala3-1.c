/*1) Elaborar um programa para subtrair duas datas. Apresentar o resultado, a diferen�a, em
anos, meses e dias. O usu�rio pode informar as datas em ordem crescente ou decrescente,
caber� ao programa fazer a verifica��o para subtrair a data menor da data maior.
Observa��o: para facilitar considere que os meses possuem 30 dias e assim todos os anos
possuem 360 dias. Para ler um valor no formato data armazenando-o em tr�s vari�veis
distintas � poss�vel utilizar o scanf com a seguinte sintaxe:
scanf(�%d/%d/%d�,&dia,&m�s,&ano);
Observar a barra entre o 1� e o 2� e entreo 2� e o 3� s�mbolos de %
O usu�rio digitar� a data no formato: 12/12/2008, incluindo as barras, e cada vari�vel ter� o seu respectivo valor armazenado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int resultAno,resultMes,resultDia,dif, diasData1, diasData2, dia, mes, ano, dia2, mes2, ano2;

    printf("Informe a primeira data: (formato 01/01/2000)");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    printf("Informe a segunda data: (formato 01/01/2000)");
    scanf("%d/%d/%d",&dia2,&mes2,&ano2);

    diasData1 =(ano*360)+(mes*30)+dia;
    diasData2 = (ano2*360)+(mes2*30)+dia2;


    if(diasData1 <diasData2)
    {
        dif= diasData2 -diasData1;
    }
    else
    {
        dif = diasData1 - diasData2;
    }
    if(dif>0)
    {
        dif= dif *1;
    }
    resultAno = (dif/360);
    resultMes = (dif %360)/30;
    resultDia = ((dif%360)%30);
    printf("%d\n",dif);
    printf("A diferen�a entre as duas datas e de\n %d/%d/%d\n",resultAno,resultMes,resultDia);
    system("pause");
    return(0);
}
