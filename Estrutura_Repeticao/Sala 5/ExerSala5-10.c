/*10) Qual o objetivo do algoritmo representado no trecho de c�digo a seguir.*/

do
    {
        printf("Informe um n�mero entre 1 e 50: ");
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

//pedir que o usu�rio informe um valor entre 1 e 50, e repete a instru��o caso n�o seja, avisa ao usuario se o valor
// estiver fora da faixa
//multiplica o valor informado por 2 enquanto o resultado for menor que 250
