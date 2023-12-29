/*12) Elaborar um programa que valide o n�mero de uma conta corrente com tr�s d�gitos e retorne
o d�gito verificador e informe se o n�mero da conta est� correto. O n�mero da conta � informado
da seguinte maneira: 1234. Sendo 123 o n�mero da conta e 4 o d�gito verificador.1112.
Sendo 111 o n�mero da conta e 2 o d�gito verificador.Ler os quatro d�gitos como um �nico n�mero.
Separe os d�gitos de forma a que os tr�s primeiros sejam o n�mero da conta e o �ltimo o d�gito verificador.
O usu�rio deve informar um n�mero com 4 d�gitos. Valide a entrada, ou seja, repetir a entrada do n�mero at�
que seja informado um n�mero com quatro d�gitos.Para obter o d�gito verificador:
a)somar o n�mero da conta com o seu inverso = 123 + 321 = 444
b)multiplicar cada d�gito pela sua ordem posicional e somar os resultados = 4 *1+ 4 * 2 + 4 * 3 = 24
c)O �ltimo d�gito desse resultado � o verificador: 4*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numConta, numContaV, numContaI, dVerificador, dVerificadorV, soma;
    int centena, dezena, unidade;

    do
    {
        printf("Informe o n�mero da conta corrente: ");
        scanf("%d",&numConta);
        if(numConta>1000&numConta<10000)
        {
            numContaV = numConta/10;
            dVerificador = numConta%10;
            centena = (numContaV/100);
            dezena = numContaV%100/10;
            unidade = numContaV%100%10;
            numContaI = (unidade * 100) + (dezena * 10) + centena;
            soma = numContaV + numContaI;
            centena = (soma/100);
            dezena = soma%100/10;
            unidade = soma%100%10;
            dVerificadorV = (unidade * 1) + (dezena * 2) + (centena * 3);
            dVerificadorV = dVerificadorV %10;
        }
    }while(numConta<1000||numConta>9999);

    if(dVerificador == dVerificadorV)
    {
        printf("Digitor verificador verificado.\n");
    }

    system("pause");
    return(0);
}
