/*10) Qual o objetivo do algoritmo representado no trecho de código a seguir.*/

do
    {
        printf("Informe um número entre 1 e 50: ");
        scanf("%d",&Num);
              if((Num < 1) || (Num > 50))
            {
                printf("valor informado fora da faixa.\n");
            }
    }while((Num < 1) || (Num > 50));

while((Num * 2) < 250)
    {
        Num = Num * 2;
        printf("%d\n",Num);
    }

//pedir que o usuário informe um valor entre 1 e 50, e repete a instrução caso não seja, avisa ao usuario se o valor
// estiver fora da faixa
//multiplica o valor informado por 2 enquanto o resultado for menor que 250
