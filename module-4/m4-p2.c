/*
* module 4
* problem 2
*
* Ask for a word and an int value between 1 and 5 (inclusive), codify it swaping the letter 3
* characters away with the current one and returning to the first one of the word if overflow happens.
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desplcir()
{
    int n, slen = 0, num = 0, tram = 0, z;
    char pal[15] = {NULL};

    do
    {
        printf("\n    Escriba Una Palabra\n    > ");
        fgets(pal, 15, stdin);
    } while (pal[0] == '\n');

    do
    {
        printf("\n\n    Ingrese Un Numero Entre 1 Y 5\n    > ");
        scanf(" %d", &num);
        fflush(stdin);
    } while (num < 1 || num > 5);

    slen = strlen(pal);
    printf("\n    > ");
    for (n = 0; n < slen; n++)
    {
        tram = pal[n];
        if ((tram > 64 && tram < 91) || (tram > 96 && tram < 123))
        {
            for (z = 1; z <= num; z++)
            {
                if (tram == 91) // si letra 'Z'+1
                {
                    tram = 65; // letra 'A'
                }
                else if (tram == 123) // si letra 'z'+1
                {
                    tram = 97; // letra 'a'
                }
                tram++;
            }
            printf("%c", tram);
        }
        else
        {
            printf("%c", pal[n]);
        }
    }
}

/* entry point */
int main(int argc, char *argv[])
{
    int proc = 0;

    do
    {
        desplcir();
        printf("\n\n    **Presione 1 Para Salir O Cualquier Otra Tecla Para Continuar**\n    ");
        proc = getch() - '0';
    } while (proc != 1);

    return 0;
}