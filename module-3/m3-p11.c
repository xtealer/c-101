/*
* module 3
* problem 11
*
* show the number of vowels inside a phrase that is ender by a (.) dot .
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int vocs, z = 0;

    printf("\n**************************************************************\n       Inserte Una Frase Y Cuando Termine Coloque Punto\n**************************************************************\n");

    while ('.' != (z = getchar()))
    {
        switch (z)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            vocs++;
        default:
            break;
        }
    }

    /* remove \n */
    getchar();

    printf("\n\nLa Frase Tiene %d Vocales.\n\n\n\n", vocs);
    getchar();

    return 0;
}