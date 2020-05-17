/*
* module 3
* problem 3
*
* Convert to Celcius degrees the temperature values from 1 to 200 Fahrenheit.
*
* - `celcius = ((fahrenheit - 32) * 5) / 9`
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int faren = 1;
    float celcius;

    printf("===================================\n#      Tabla de Temperaturas      #\n===================================\n");

    for (faren = 1; faren < 201; faren++)
    {
        celcius = ((faren - 32) * 5) / 9;

        if (faren < 10)
        {
            /* helps align printend values */
            printf("| Fahrenheith %d    Celcius %.2f |\n", faren, celcius);
        }
        else if (faren > 9 & faren < 100)
        {
            if (faren < 31)
            {
                printf("| Fahrenheith %d   Celcius %.2f", faren, celcius);
            }
            else
            {
                printf("| Fahrenheith %d   Celcius  %.2f", faren, celcius);
            }

            if (faren > 9 & faren < 15)
            {
                /* more aligned bars */
                printf(" |\n");
            }
            else if (faren > 14 & faren < 31)
            {
                printf("  |\n");
            }
            else if (faren > 30 & faren < 50)
            {
                printf("  |\n");
            }
            else if (faren > 49 & faren < 100)
            {
                printf(" |\n");
            }
        }
        else if (faren > 99)
        {
            printf("| Fahrenheith %d  Celcius  %.2f |\n", faren, celcius);
        }
    }

    printf("===================================\n\n\n");
    getchar();

    return 0;
}