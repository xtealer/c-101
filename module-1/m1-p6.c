/*
* module 1
* problem 6
*
* Given values **a**, **b**, **y** and **x** solve the equation
* `(x - y) / (3 * (a * b))`, show the answer as output.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main()
{
   int x = 0, y = 0, a = 0, b = 0;
   float r = 0;

   printf("Ecuacion X-Y/3AB\nValor de A\n");
   scanf(" %d", &a);

   printf("Valor de B\n");
   scanf(" %d", &b);

   printf("Valor de Y\n");
   scanf(" %d", &y);

   printf("Valor de X\n");
   scanf(" %d", &x);

   /* eats extra \n*/
   getchar();

   r = (x - y) / (3 * (a * b));

   printf("Respuesta %.2f\n", r);

   printf("\n\nPress Any Key To Exit ...");
   getchar();

   return 0;
}