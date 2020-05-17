/*
* module 3
* problem 9
*
* Given a **int number**, get it's product from 1 to 12 multipliers.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int numer = 0, multab = 0, ctabla = 0;

    printf("\n\nInserte Un Numero Entero\n");
    scanf("%d", &numer);

    /* remove \n */
    getchar();

    printf("\n========================\n      Tabla Del %d\n========================\n", numer);
    for (ctabla = 1; ctabla <= 12; ctabla++)
    {
        multab = numer * ctabla;
        if (ctabla < 10)
        {
            printf("  %d  x  %d   =  %d\n", numer, ctabla, multab);
        }
        else
        {
            printf("  %d  x  %d  =  %d\n", numer, ctabla, multab);
        }
    }
    getchar();

    return 0;
}