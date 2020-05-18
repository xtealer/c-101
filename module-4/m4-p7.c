/*
* module 4
* program 7
*
* Find the number of words in a given string. Every new word comes after a space character.
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palabras(void)
{
    int a, stl = 0, palb = 1;
    char str[101] = "";

    printf("\n    ===========================================================================\n    Ingrese Una Cadena De Palabras Menor A 100 Caracteres (Incluyendo Espacios)\n    ===========================================================================\n    > ");
    gets(str);

    stl = strlen(str);
    for (a = 0; a < stl - 1; a++)
    {
        if (str[a] == ' ')
        {
            palb++;
        }
    }

    printf("    ================================\n    >    Palabras Ingresadas: %d\n    ================================", palb);
}

/* entry point */
int main(int argc, char *argv[])
{
    int n = 0;

    do
    {
        system("CLS");
        palabras();
        printf("\n\n    *****DESEA CONTINUAR? s/n\n    > ");
        n = getchar();
        getchar();
    } while (n != 'n' && n != 'N');

    return 0;
}