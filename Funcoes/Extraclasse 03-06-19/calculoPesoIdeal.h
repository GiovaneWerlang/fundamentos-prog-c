float pesoIdeal (float num, char genero)
{
    float result;

    if(genero=='M'||genero=='m')
    {
        result = 72.7 * num - 58.0;
    }
    else //if(genero=='F'||genero=='f')
    {
        result = 62.1 * num - 44.7;
    }
    return(result);
}
