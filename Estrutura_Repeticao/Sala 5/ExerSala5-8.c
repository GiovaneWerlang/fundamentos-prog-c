/*8) Qual o objetivo do algoritmo representado no trecho de código a seguir.
Explique a forma de ação de cada estrutura de repetição.*/
//receber o dado idade, se é estudando ou professor e caso seja professor o seu salario, e valida as entradas.
//laço for repete as instruções por um número determinado de vezes
//do while repete as intruções até que a condição em while seja alcançada

for (Cont=1; Cont<=5; Cont++)
    {
        do
        {
            printf("Informe a Idade:"); //pede ao usuário para informar a idade
            scanf("%d",&Idade); // le o buffer do teclado para valor inteiro e o armazena na variavel Idade
        } while (Idade < 0); //define que enquando idade for menor que 0
                    do //fazer
                    {
                    printf("Informe o tipo, (E)estudante/(P)Professor:");//pede ao usuario que informe o tipo
                    fflush(stdin); //limpa o buffer do teclado para evitar erros no uso de char
                    scanf("%c",&Tipo); //le o buffer do teclado para valor char, e armazena na variavel Tipo
                    }while(Tipo !='E' && Tipo!='e' && Tipo!='P' && Tipo!='p'); //enquando o tipo informado for diferente de E,e,P,p, vai repetir a instrução
                    if (Tipo=='p' || Tipo =='P') //se o valor char armazenado na variavel tipo for igual a p ou P
                        {
                        do //faz
                        {
                            printf ("Informe o salario:"); //pede ao usuário que informe o valor para salario
                            scanf("%f",&Salario); //le o buffer do teclado para um valor float e o armazena na variavel Salario
                            }while (Salario<=0); //repete a instrução até o valor informado para salario ser maior que 0
                        }
    }


