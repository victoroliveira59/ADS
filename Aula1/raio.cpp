#include <stdio.h>

  float valor1, valor2, resultado;

char op[10];
int main(){

      
  

  

    printf("Informe o valor 1: \n");

    scanf("%f", &valor1);

    printf("Informe o valor 2: \n");

    scanf("%f", &valor2);

    printf("Informe a opera��o (+ | - | * | /): \n");
    
    op =getch();

   switch(op){
         case '+':

              resultado = valor1 + valor2;

         case '-':

              resultado = valor1 - valor2;

         case '*':

              resultado = valor1 * valor2;

         case '/':

              resultado = valor1 / valor2;

         default:

              printf("Opera��o Inv�lida! ");}

   printf("Resultado: %.2f", resultado);
}
