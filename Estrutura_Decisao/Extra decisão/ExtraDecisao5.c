/*5) Um supermercado est� com uma promo��o de carnes:
� �����������At� 5 Kg���������� Acima de 5 Kg
� File Duplo����� R$ 4,90 por Kg��������� R$ 5,80 por Kg
� Alcatra ��������R$ 5,90 por Kg��������� R$ 6,80 por Kg
� Picanha�������� R$ 6,90 por Kg��������� R$ 7,80 por Kg
�
Para atender a todos os clientes, cada cliente poder� levar apenas um dos tipos de carne da promo��o,
por�m n�o h� limites para a quantidade de carne por cliente.
Se compra for feita no cart�o o cliente receber� ainda um desconto de 5% sobre o total a compra.
Escreva um programa que pe�a o tipo e a quantidade de carne comprada pelo usu�rio e gere um cupom fiscal,
contendo as informa��es da compra:
tipo e quantidade de carne,
pre�o total,
tipo de pagamento,
valor do desconto e valor a pagar.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float kg, desconto, pagar, precoTotal;
    char cartao,tipoCarne;

    printf("Qual to tipo de carne que deseja levar? \n(F-Fil� Duplo,A-Alcatra,P-Picanha)");
    scanf("%c",&tipoCarne);
    printf("Quantos quilos? ");
    scanf("%d",&kg);
    printf("Deseja pagar com cart�o? (S/N)");
    fflush(stdin);
    scanf("%c",&cartao);

    if(cartao == 'S')
    {
        if(tipoCarne== 'F')
        {
            if(kg<=5)
            {
                pagar = kg * 4.90;
                desconto = pagar * ((float)5/100);
                precoTotal = pagar - desconto;

            }
            else
            {
                pagar = kg * 5.80;
                desconto = pagar * ((float)5/100);
                precoTotal = pagar - desconto;
            }
        }
        else if(tipoCarne == 'A')
        {
            if(kg<=5)
            {
                pagar = kg * 5.90;
                desconto = pagar * ((float)5/100);
                precoTotal = pagar - desconto;

            }
            else
            {
                pagar = kg * 6.80;
                desconto = pagar * ((float)5/100);
                precoTotal = pagar - desconto;
            }
        }
        else if(tipoCarne == 'P')
        {
            if(kg<=5)
            {
                pagar = kg * 6.90;
                desconto = pagar * ((float)5/100);
                precoTotal = pagar - desconto;

            }
            else
            {
                pagar = kg * 7.80;
                desconto = pagar * ((float)5/100);
                precoTotal = pagar - desconto;
            }
        }
    }
    else
    {
        if(tipoCarne== 'F')
        {
            if(kg<=5)
            {
                pagar = kg * 4.90;
                desconto = 0;
                precoTotal = pagar;

            }
            else
            {
                pagar = kg * 5.80;
                desconto = 0;
                precoTotal = pagar;
            }
        }
        else if(tipoCarne == 'A')
        {
            if(kg<=5)
            {
                pagar = kg * 5.90;
                desconto = 0;
                precoTotal = pagar;

            }
            else
            {
                pagar = kg * 6.80;
                desconto = 0;
                precoTotal = pagar;
            }
        }
        else if(tipoCarne == 'P')
        {
            if(kg<=5)
            {
                pagar = kg * 6.90;
                desconto = 0;
                precoTotal = pagar;

            }
            else
            {
                pagar = kg * 7.80;
                desconto = 0;
                precoTotal = pagar;
            }
        }
    }
    tipo e quantidade de carne,
pre�o total,
tipo de pagamento,
valor do desconto e valor a pagar
    if(tipoCarne=='F')
    {
        printf("File Duplo %.2f KG",kg);
        printf("Pre�o total R$:%.2f",precoTotal);
        printf("Tipo de pagamento")
    }
    else if(tipoCarne=='A')
    {

    }
    else
    {

    }


    system("pause");
    return(0);
}

