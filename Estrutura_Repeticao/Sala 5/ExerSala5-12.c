/*12) Elaborar um programa que valide o número de uma conta corrente com três dígitos e retorne
o dígito verificador e informe se o número da conta está correto. O número da conta é informado
da seguinte maneira: 1234. Sendo 123 o número da conta e 4 o dígito verificador.1112.
Sendo 111 o número da conta e 2 o dígito verificador.Ler os quatro dígitos como um único número.
Separe os dígitos de forma a que os três primeiros sejam o número da conta e o último o dígito verificador.
O usuário deve informar um número com 4 dígitos. Valide a entrada, ou seja, repetir a entrada do número até
que seja informado um número com quatro dígitos.Para obter o dígito verificador:
a)somar o número da conta com o seu inverso = 123 + 321 = 444
b)multiplicar cada dígito pela sua ordem posicional e somar os resultados = 4 *1+ 4 * 2 + 4 * 3 = 24
c)O último dígito desse resultado é o verificador: 4*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numConta, numContaV, numContaI, dVerificador, dVerificadorV, soma;
    int centena, dezena, unidade;

    do
    {
        printf("Informe o número da conta corrente: ");
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
