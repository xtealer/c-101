/*
* module 1
* problem 3
*
* Given values **a**, **b** and **c** solve the following equation
* `(c + b) * (3 - b) / 4^4`, show the answer as output.
*/

/* imported libraries */
#include <stdio.h>
#include <math.h>

/* entry point */
int main(int argc, char *argv[])
{
  int x;
  float result, a, b, c;

  do
  {
    printf("\n=================================\nOperacion (C+B)(3-B)/4^A\n---------------------------------\nValor de A\n");
    scanf("%f", &a);

    printf("\nValor de B\n");
    scanf(" %f", &b);

    printf("\nValor de C\n");
    scanf(" %f", &c);

    result = ((c + b) * (3 - b)) / (pow(4, a));

    printf("-------------------------\nResultado = %.2f \n> 1 Para Continuar\n> 0 Para Salir\n", result);
    scanf(" %f", &x);
    /* eats extra \n */
    getchar();
  } while (x == 1);

  return 0;
}