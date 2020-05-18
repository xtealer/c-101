/*
* module 4
* program 6
*
* Read 10 leters as chars and do the following operations:
*
*  - `show the vector on screen`
*  - `show the vector on screen reversed`
*  - `convert all characters to uppercase`
*  - `convert all characters to lowercase`
*  - `find how many letters are vowels`
*  - `find how many letters are consonants`
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char carac[10];

void carg(void)
{
    int x;
    for (x = 0; x < 10; x++)
    {
        printf("\n    Ingrese El Caracter %d/10\n    > ", x + 1);
        scanf(" %1c", &carac[x]);
    }
    getchar();
    system("CLS");
}

void parre(void)
{
    int x;
    printf("\n\n    Caracteres Ingresados > ");
    for (x = 0; x < 10; x++)
    {
        printf(" %c", carac[x]);
        if (x < 9)
        {
            printf(",");
        }
    }

    printf("\n    Caracteres En Order Inverso > ");
    for (x = 9; x > -1; x--)
    {
        printf(" %c", carac[x]);
        if (x > 0)
        {
            printf(",");
        }
    }

    printf("\n    Caracteres En Mayuscula >");
    for (x = 0; x < 10; x++)
    {
        carac[x] = toupper(carac[x]);
        printf(" %c", carac[x]);
        if (x < 9)
        {
            printf(",");
        }
    }

    printf("\n    Caracteres En Minuscula >");
    for (x = 0; x < 10; x++)
    {
        carac[x] = tolower(carac[x]);
        printf(" %c", carac[x]);
        if (x < 9)
        {
            printf(",");
        }
    }
}

void dechar(void)
{
    int x, y, csn = 0, vow = 0, elch = 0;
    char abc[25] = {'a', 'e', 'i', 'o', 'u', 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'y', 'z'};

    for (x = 0; x < 10; x++)
    {
        y = 0;
        while (1)
        {
            if (y > 24)
            {
                elch++;
                break;
            }
            else if (carac[x] == abc[y])
            {
                if (y >= 0 && y <= 4)
                {
                    vow++;
                    break;
                }
                else if (y < 25)
                {
                    csn++;
                    break;
                }
            }
            y++;
        }
    }
    printf("\n    > Vocales = %d\n    > Consonantes = %d\n    > Otros Caracteres = %d", vow, csn, elch);
}

/* entry point */
int main(int argc, char *argv[])
{
    int x;

    do
    {
        carg();
        parre();
        dechar();
        printf("\n\n    ******SALIR >> s | n << CONTINUAR******\n    > ");
        x = getchar();
    } while (x != 's' && x != 'S');

    return 0;
}