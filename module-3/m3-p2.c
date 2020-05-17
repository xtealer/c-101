/*
* module 3
* problem 2
*
* Given a **int number**, calculate it's **factorial value**.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int nume, cci;
    unsigned long long fact = 1;

    printf("\nIngrese Un Numero Entero\n");
    scanf("%d", &nume);

    /* remove \n */
    getchar();

    if (nume < 0)
    {
        printf("Error, El Numero Ingresado No Puede Ser Negativo\n");
    }
    else
    {
        for (cci = 1; cci <= nume; cci++)
        {
            fact *= cci;
        }
        printf("===============================================\nEl Factorial Del Numero %d es: %d", nume, fact);
    }

    printf("\n\n\n****************Fin De Programa****************\n");
    getchar();

    return 0;
}