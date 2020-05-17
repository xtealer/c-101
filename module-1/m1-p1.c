/*
* module 1 - problem 1
* Given values a, b and y
* solve the following equation `(y + b) / (a - b)`,
* show the answer as output.
*/

/* imported libraries */
#include <stdio.h>

/* program entry point */
int main()
{
    float r = 0, a, b, y;

    printf("Operacion (y+b)/(a-b) \nValor de A\n");
    scanf(" %d", &a);

    printf("Valor de B\n");
    scanf(" %d", &b);

    printf("Valor de Y\n");
    scanf(" %d", &y);

    r = (y + b) / (a - b);

    printf("El Resultado es %.2f\n", r);
    getchar();

    return 0;
}
