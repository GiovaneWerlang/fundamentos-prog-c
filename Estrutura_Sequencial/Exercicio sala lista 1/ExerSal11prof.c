/*11) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo
usuário. Calcule e mostre o resultado de cada expressão.
Atenção para os resultados que podem ser valores float e para a prioridade dos
operadores.
Primeiro linearizar as expressões depois implementar o algoritmo para calcular o
resultado.
a) x + y * x2       (X + y * (X * X)) / Y
     y
b) x + y            (X + Y) / (X - Y)
   x – y
c) x2 + y3          ((X * X) + (Y * Y * Y)) / 2
      2
d) x3 / x2          (X * X * X) / ( X * X)

e) Resto da divisão de x por y    X % Y
 Resto da divisão de x por 3      X % 3
 Resto da divisão de y por 5      Y % 5  */


 #include <stdio.h>
 #include <stdlib.h>

 int main(void)
 {

     //variaveis
     int X, Y, resultadoInt;
     float resultadoFloat;

     //entrada
     printf("Informe o valor de X: ");
     scanf("%d",&X);
     printf("Informe o valor de Y: ");
     scanf("%d",&Y);

     //processamento
     resultadoFloat =  ((float)X + Y) / Y * (X * X);
     printf("O resultado de a e: %.2f\n",resultadoFloat);
     resultadoFloat =  ((float)X + Y) / (X - Y);
     printf("O resultado de b e: %.2f\n",resultadoFloat);
     resultadoFloat =  ((X * X) + (Y * Y * Y)) / 2.0;
     printf("O resultado de c e: %.2f\n",resultadoFloat);
     resultadoFloat =  (X * X * X) / ((float)X * X);
     printf("O resultado de d e: %.2f\n",resultadoFloat);
     resultadoInt =  X % Y;
     printf("O resultado de e e: %d\n",resultadoInt);
     resultadoInt =  X % 3;
     printf("O resultado de f e: %d\n",resultadoInt);
     resultadoInt =  Y % 5;
     printf("O resultado de g e: %d\n",resultadoInt);
 }
