/*
* module 1
* problem 5
* Given **float** values **a** and **b** calculate their sum,
* substraction and multiplication, show the answer as output.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    float a, n, suma, resta, multip;

    printf("Ingrese el Primer Valor\n");
    scanf(" %f", &a);

    printf("Ingrese el Segundo Valor\n");
    scanf(" %f", &n);

    /* eat extra newline */
    getchar();

    suma = a + n;
    resta = a - n;
    multip = a * n;

    printf("La Suma es = %.2f\nLa Resta es = %.2f\nLa Multiplicacion es = %.2f", suma, resta, multip);
    getchar();

    return 0;
}