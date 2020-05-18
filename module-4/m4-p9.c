/*
* module 4
* program 9
*
* Remove all whitespaces from a given string.
*/

/* imported libraries */
#include <stdio.h>
#include <stdlib.h>

void read_string()
{
    int f = 0;
    char cad[101] = "";

    printf("\n    ===============================================================\n    Ingrese Una Cadena Menor A 100 Caracteres (Incluyendo Espacios)\n    ===============================================================\n    > ");
    fgets(cad, 101, stdin);

    printf("\n    Cadena Procesada> ");
    while (cad[f] != '\n')
    {
        if (cad[f] != ' ')
        {
            printf("%c", cad[f]);
        }
        f++;
    }
}

/* entry point */
int main(int argc, char *argv[])
{
    int e = 0;

    do
    {
        read_string();
        printf("\n\n    ******CONTINUAR? s/n******\n    > ");
        e = getchar();
        getchar();
    } while (e != 'n' && e != 'N');

    return 0;
}