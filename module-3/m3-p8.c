/*
* module 3
* problem 8
*
* Get the SUM and PRODUCT of odd values in range of 20 to 400 (inclusive).
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>

/* entry point */
int main(int argc, char *argv[])
{
    int con = 0, sum = 0;
    double prod = 1;

    printf("\n\n                                               Numeros Desde El 20 Al 200\n ======================================================================================================================\n");
    for (con = 20; con <= 400; con += 2)
    {
        sum += con;
        if (con < 117)
        {
            prod *= con;
        }
    }

    printf(" Suma Numeros Pares Desde El 200 Al 400: %d\n Producto Hasta El Numero 115: %1.f\n", sum, prod);
    getchar();

    return 0;
}