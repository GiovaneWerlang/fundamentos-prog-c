/*5) Um supermercado está com uma promoção de carnes:
·            Até 5 Kg           Acima de 5 Kg
· File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
· Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
· Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg
 
Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção,
porém não há limites para a quantidade de carne por cliente.
Se compra for feita no cartão o cliente receberá ainda um desconto de 5% sobre o total a compra.
Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal,
contendo as informações da compra:
tipo e quantidade de carne,
preço total,
tipo de pagamento,
valor do desconto e valor a pagar.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float kg, desconto, pagar, precoTotal;
    char cartao,tipoCarne;

    printf("Qual to tipo de carne que deseja levar? \n(F-Filé Duplo,A-Alcatra,P-Picanha)");
    scanf("%c",&tipoCarne);
    printf("Quantos quilos? ");
    scanf("%d",&kg);
    printf("Deseja pagar com cartão? (S/N)");
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
preço total,
tipo de pagamento,
valor do desconto e valor a pagar
    if(tipoCarne=='F')
    {
        printf("File Duplo %.2f KG",kg);
        printf("Preço total R$:%.2f",precoTotal);
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

