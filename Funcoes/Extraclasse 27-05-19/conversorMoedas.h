//Tipo 'D' ou 'd' significa que a
//conversão é de real para dólar e 'R' ou 'r' significa que a conversão é de dólar para real.
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

