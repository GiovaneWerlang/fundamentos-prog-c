//Tipo 'D' ou 'd' significa que a
//convers�o � de real para d�lar e 'R' ou 'r' significa que a convers�o � de d�lar para real.
float converterMoedas( float valor, float cotacao, char tipo)
{
    switch(tipo)
    {
        case 'R':
        case 'r':
        {
            float resultado;
            resultado = valor / cotacao;
            return(resultado);
        }
        case 'D':
        case 'd':
        {
            float resultado;
            resultado = valor * cotacao;
            return(resultado);
        }
    }
}

