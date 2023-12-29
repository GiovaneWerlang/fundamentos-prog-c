//limpar o buffer
void limparBuffer(void)
{
    char caractere;
    do
    {
        scanf("%c",&caractere);
    }while(caractere != '\n'); // !=10 //while(getchar!=0);
}

void naoFechar(void)
{
    limparBuffer();
    printf("Pressione qualquer tecla para fechar o programa");
    getchar(); //scanf("%c",&var); ou var = getchar();
}








