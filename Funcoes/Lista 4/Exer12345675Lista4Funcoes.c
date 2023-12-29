/*7) Fazer uma função que verificar se um determinado dígito pertence  a um determinado número. Pense
sobre e defina os parâmetros e retorno da função.
Utilize essa função para fazer um programa que lê um número (o dígito). Validar entrada, deve estar entre 0 e
9. E em seguida lê uma série de números, parar quando informado valor negativo. Para cada um dos valor
positivos informados verificar se o dígito está presente, utilizando, obrigatoriamente a função feita.
Exemplo:Digito 5
Números:15
15 possui 5 como dígito
23
23 não possui 5 como dígito
555
555 possui 5 como dígito  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pauseLimpa.h"
#include "quadradoperfeito.h"
#include "triangular.h"
#include "retangular.h"
#include "ceil.h"
#include "caixareaiscentavos.h"
#include "verificaNumEmNum.h"

int main(void)
{
    char repetir, opcao2, SN;
    int var1, var2, i, opcao;
    float varf1, varf2, copo;

    do
    {
        system("cls");
        //
            printf("Funções lista 4 revisão.\n");
            printf("1 - Verificar de quadrado perfeito.\n");
            printf("2 - Verificar se um número é triângular.\n");
            printf("3 - Verificar se um número é retangular.\n");
            printf("4 - Mostrar no intervalo de 1 a 100 quais números são quadrados perfeitos, triangulares, retangulares.\n");
            printf("5 - Arredonda float.\n");
            printf("6 - Caixa de supermercado.\n");
            printf("7 - Verifica se o número informado está nos próximos números informados.\n");
            printf("Digite a opção desejada: ");
            fflush(stdin);
            scanf("%d",&opcao);

            switch(opcao)
            {
                case 1:
                {
                    printf("Informe a opção desejada: \n");
                    printf("A - Verificar se um número inteiro é um quadrado perfeito.\n");
                    printf("B - Verificar se a parte inteira de um número float é um quadrado perfeito.\n");
                    printf("C - Mostrar os quadrados perfeitos de um intervalo.\n");
                    fflush(stdin);
                    scanf("%c",&opcao2);

                    switch(opcao2)
                    {
                        case 'A':
                        case 'a':
                        {
                            do
                            {
                                printf("Informe o número que deseja verificar se é um quadrado perfeito: ");
                                scanf("%d",&var1);
                            }while(var1<=0);
                            SN = verificaPerfeito(var1);
                            if(SN == 's')
                            {
                                printf("%d é um quadrado perfeito.\n",var1);
                            }
                            else
                            {
                                printf("%d não é um quadrado perfeito.\n",var1);
                            }
                            break;
                        }
                        case 'B':
                        case 'b':
                        {
                            do
                            {
                                printf("Informe o número que deseja verificar se é um quadrado perfeito: ");
                                scanf("%f",&varf1);
                            }while(var1<=0);
                            var1 = varf1;
                            SN = verificaPerfeito(var1);
                            if(SN == 's')
                            {
                                printf("A parte inteira de %.2f é um quadrado perfeito.\n",varf1);
                            }
                            else
                            {
                                printf("A parte inteira de %.2f não é um quadrado perfeito.\n",varf1);
                            }
                            break;
                        }
                        case 'C':
                        case 'c':
                        {
                            do
                            {
                                printf("Informe o primeiro limite do intervalo: ");
                                scanf("%d",&var1);
                            }while(var1<=0);
                            do
                            {
                                printf("Informe o segundo limite do intervalo: ");
                                scanf("%d",&var2);
                            }while(var2<=0);
                            if(var2<var1)
                            {
                                i = var1;
                                var1 = var2;
                                var2 = i;
                            }
                            for(i=var1;i<=var2;i++)
                            {
                                SN = verificaPerfeito(i);
                                if(SN == 's')
                                {
                                    printf("%d\t",i);
                                }
                            }

                            break;
                        }
                        default:
                            {
                                printf("Opção inválida, tente novamente.\n");
                            }
                    }
                    break;
                }
                case 2:
                {
                    do
                    {
                        printf("Informe o número que deseja verificar se é triângular: ");
                        scanf("%d",&var1);
                    }while(var1<=0);
                        SN = verificaTriangular(var1);
                        if(SN=='s')
                        {
                            printf("%d é triangular.\n",var1);
                        }
                        else
                        {
                            printf("%d não é triangular.\n",var1);
                        }

                    break;
                }
                case 3:
                {
                    do
                    {
                        printf("Informe o número que deseja verificar se é retangular: ");
                        scanf("%d",&var1);
                    }while(var1<=0);
                        SN = verificaRetangular(var1);
                        if(SN=='s')
                        {
                            printf("%d é retangular.\n",var1);
                        }
                        else
                        {
                            printf("%d não é retangular.\n",var1);
                        }
                    break;
                }
                case 4:
                {
                    printf("\tQuadrado\tTriangular\tRetangular.\n");
                    for(i=1;i<=100;i++)
                    {
                        printf("%d\t",i);
                        SN = verificaPerfeito(i);
                        if(SN == 's')
                        {
                            printf("X\t\t");
                        }
                        else
                        {
                            printf("\t\t");
                        }
                        SN = verificaTriangular(i);

                        if(SN == 's')
                        {
                            printf("X\t\t");
                        }
                        else
                        {
                            printf("\t\t");
                        }
                        SN = verificaRetangular(i);
                        if(SN == 's')
                        {
                            printf("X");
                        }
                        else
                        {
                            printf("\t\t");
                        }
                        printf("\n");
                    }
                    break;
                }
                case 5:
                {
                    printf("Informe a opção desejada: \n");
                    printf("A - Transformar floats em inteiros (0 ou negativo para sair).\n");
                    printf("B - Transformar float em inteiros dentro de 2 limites.\n");
                    fflush(stdin);
                    scanf("%c",&opcao2);

                    switch(opcao2)
                    {
                        case 'A':
                        case 'a':
                        {
                            do
                            {
                                printf("Informe o número float que deseja transformar em inteiro: ");
                                scanf("%f",&varf1);
                                if(varf1>0)
                                {
                                    exerceil(varf1);
                                    printf("\n");
                                }
                            }while(varf1>0);

                            break;
                        }
                        case 'B':
                        case 'b':
                        {
                            do
                            {
                                printf("Informe o primeiro limite float: ");
                                scanf("%f",&varf1);
                            }while(varf1<=0);
                            do
                            {
                                printf("Informe o segundo limite float: ");
                                scanf("%f",&varf2);
                            }while(varf2<=0);
                            if(varf2<varf1)
                            {
                                copo = varf1;
                                varf1 = varf2;
                                varf2 = copo;
                            }

                            limiceil(varf1,varf2);

                            break;
                        }
                        default:
                            {
                                printf("Opção inválida, tente novamente.\n");
                            }
                        break;
                    }
                }
                case 6:
                {
                    varf2 = 0;
                    do
                    {
                        printf("Informe o valor unitário: ");
                        scanf("%f",&varf1);
                        if(varf1>0)
                        {
                            printf("Informe a quantidade de produto: ");
                            scanf("%d",&var1);
                            varf2 = varf2 + (varf1 * var1);
                        }
                        else
                        {
                            varf1=-1;
                        }
                    }while(varf1>0);
                    printf("Total da compra: %.2f\n",varf2);
                    do
                    {
                        printf("Informe o valor para pagamento: ");
                        scanf("%f",&varf1);
                    }while(varf1<varf2);
                    varf1 = varf1 - varf2;
                    printf("Troco %d reais e %.2f centavos.\n",reais(varf1),centavos(varf1));
                    break;
                }
                case 7:
                {
                    do
                    {
                        printf("Informe o digito para verificação: ");
                        scanf("%d",&var1);
                    }while(var1<0||var1>9);
                    do
                    {
                        printf("Informe um número para ser verificado: ");
                        scanf("%d",&var2);
                        if(var2>0)
                        {
                            printf("Digito %d\n",var1);
                            verificaNumEmNum(var1,var2);
                        }
                    }while(var2>-1);
                    break;
                }
                default:
                {
                    printf("Opção inválida tente novamente.\n");
                    break;
                }
            }
        printf("\nExecutar novamente (s/S para sim)? ");
        limparBuffer();
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

    naoFechar();
    return(0);
}
