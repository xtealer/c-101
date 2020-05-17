/*
* module 3
* problem 7
*
* Ask for **50 int values** and determine classify them with the following criteria:
*
*   - positive or negative
*   - odd or even
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int count, nume, pars = 0, imres = 0, posit = 0, neg = 0;

    for (count = 1; count <= 50; count++)
    {
        printf("\nNumero %d\n", count);
        scanf("%d", &nume);

        /* remove \n */
        getchar();

        if (nume >= 0)
        {
            posit++;
        }
        else
        {
            neg++;
        }
        if ((nume % 2) == 0)
        {
            pars++;
        }
        else
        {
            imres++;
        }
    }

    printf("\n============================\n  Numeros Introducidos: 50\n============================\n  Positivos %d\n  Negativos %d\n  Pares %d\n  Impares %d\n", posit, neg, pars, imres);
    getchar();

    return 0;
}