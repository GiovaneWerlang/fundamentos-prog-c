/*8) Qual o objetivo do algoritmo representado no trecho de c�digo a seguir.
Explique a forma de a��o de cada estrutura de repeti��o.*/
//receber o dado idade, se � estudando ou professor e caso seja professor o seu salario, e valida as entradas.
//la�o for repete as instru��es por um n�mero determinado de vezes
//do while repete as intru��es at� que a condi��o em while seja alcan�ada

for (Cont=1; Cont<=5; Cont++)
    {
        do
        {
            printf("Informe a Idade:"); //pede ao usu�rio para informar a idade
            scanf("%d",&Idade); // le o buffer do teclado para valor inteiro e o armazena na variavel Idade
        } while (Idade < 0); //define que enquando idade for menor que 0
                    do //fazer
                    {
                    printf("Informe o tipo, (E)estudante/(P)Professor:");//pede ao usuario que informe o tipo
                    fflush(stdin); //limpa o buffer do teclado para evitar erros no uso de char
                    scanf("%c",&Tipo); //le o buffer do teclado para valor char, e armazena na variavel Tipo
                    }while(Tipo !='E' && Tipo!='e' && Tipo!='P' && Tipo!='p'); //enquando o tipo informado for diferente de E,e,P,p, vai repetir a instru��o
                    if (Tipo=='p' || Tipo =='P') //se o valor char armazenado na variavel tipo for igual a p ou P
                        {
                        do //faz
                        {
                            printf ("Informe o salario:"); //pede ao usu�rio que informe o valor para salario
                            scanf("%f",&Salario); //le o buffer do teclado para um valor float e o armazena na variavel Salario
                            }while (Salario<=0); //repete a instru��o at� o valor informado para salario ser maior que 0
                        }
    }


