/*
* module 3
* problem 1
*
* Print on screen the square and cube of the first 25 natural numbers.
*/

/* imported libraries */
#include <stdio.h>
#include <math.h>

/* entry point */
int main(int argc, char *argv[])
{
    int numrs, cuddo, cubo;

    printf("\n====================================================================");
    for (numrs = 1; numrs < 26; numrs++)
    {
        cuddo = pow(numrs, 2);
        cubo = pow(numrs, 3);
        if (numrs < 4)
        {
            printf("\n#  El Numero es: %d   |  Su Cuadrado es: %d    |  Su Cubo es: %d", numrs, cuddo, cubo);
            if (numrs < 3)
            {
                printf("      #");
            }
            else
            {
                printf("     #");
            }
        }
        else if (numrs > 3 & numrs < 10)
        {
            printf("\n#  El Numero es: %d   |  Su Cuadrado es: %d   |  Su Cubo es: %d", numrs, cuddo, cubo);
            if (numrs < 5)
            {
                printf("     #");
            }
            else if (numrs > 4 & numrs < 10)
            {
                printf("    #");
            }
        }
        else
        {
            printf("\n#  El Numero es: %d  |  Su Cuadrado es: %d  |  Su Cubo es: %d", numrs, cuddo, cubo);
            if (numrs > 9 & numrs < 22)
            {
                printf("   #");
            }
            else
            {
                printf("  #");
            }
        }
    }

    printf("\n====================================================================\n\n----------------------------Fin Del Ciclo---------------------------\n\n");
    getchar();

    return (0);
}