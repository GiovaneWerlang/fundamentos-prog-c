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

 int main(void)
 {

     //variaveis
     int X, Y, b, e, f, g;
     float a, c, d;
     //entrada
     printf("Informe o valor de X: ");
     scanf("%d",&X);
     printf("Informe o valor de Y: ");
     scanf("%d",&Y);

     //processamento
     a =  ((float)X + Y * (X * X)) / Y;
     b =  ((float)X + Y) / (X - Y);
     c =  (((float)X * X) + (Y * Y * Y)) / 2;
     d =  ((float)X * X * X) / ( X * X);
     e =  X % Y;
     f =  X % 3;
     g =  Y % 5;


     //saida
     printf("O resultado de a e: %f\n",a);
     printf("O resultado de b e: %d\n",b);
     printf("O resultado de c e: %f\n",c);
     printf("O resultado de d e: %f\n",d);
     printf("O resultado de e e: %d\n",e);
     printf("O resultado de f e: %d\n",f);
     printf("O resultado de g e: %d",g);


 }
