/*3)  Ler n�meros informados pelo usu�rio. Parar a leitura quando informado um n�mero
negativo. Esse n�mero n�o deve ser considerado na contagem. Contar quantos n�meros
divis�veis por 5 e pares foram informados.Lembrar de inicializar vari�veis.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int divi5=0, pares=0;

    do{
        printf("Informe um n�mero (negativo para sair): ");
        scanf("%d",&num);
        if(num>=0)
        {
            if(num%5==0)
            {
                divi5++;
            }
            if(num%2==0)
            {
                pares++;
            }
        }

    }while(num>=0);

    printf("%d n�meros divisiveis por 5 e %d pares.\n",divi5, pares);

    system("pause");
    return(0);
}
