/*14) (Desafio) As instru��es de programa a seguir podem ser alteradas de forma que a instru��o
�if (Num != -99)� n�o seja necess�ria?
Se sim, como; e se n�o, por qu�?*/
    while (Num != -99)
    {
        printf("Informe um n�mero: ");
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
