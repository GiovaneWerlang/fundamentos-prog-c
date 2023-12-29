/*14) (Desafio) As instruções de programa a seguir podem ser alteradas de forma que a instrução
“if (Num != -99)” não seja necessária?
Se sim, como; e se não, por quê?*/
    while (Num != -99)
    {
        printf("Informe um número: ");
        scanf("%d",&Num);
        if (Num != -99)
            {
                if (Num < Menor)
                {
                    Menor = Num;
                }
                else if (Num > Maior)
                {
                    Maior = Num;
                }
            }
    }
