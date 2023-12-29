/*3)  Ler números informados pelo usuário. Parar a leitura quando informado um número
negativo. Esse número não deve ser considerado na contagem. Contar quantos números
divisíveis por 5 e pares foram informados.Lembrar de inicializar variáveis.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int divi5=0, pares=0;

    do{
        printf("Informe um número (negativo para sair): ");
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

    printf("%d números divisiveis por 5 e %d pares.\n",divi5, pares);

    system("pause");
    return(0);
}
