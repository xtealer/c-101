/*
* module 2
* problem 4
*
* Given int values of **a**, **b** and **c** show them in descendant order in screen.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int a, b, c;

    printf("Valor de A\n");
    scanf("%d", &a);

    printf("Valor de B\n");
    scanf(" %d", &b);

    printf("Valor de C\n");
    scanf(" %d", &c);

    /* remove \n */
    getchar();

    printf("\n==========================================\n");
    printf("Valores en Orden Descendente ");
    if (a >= b && b >= c)
    {
        printf("(A, B, C)\n----> %d, %d, %d", a, b, c);
    }
    else if (a >= c && c >= b)
    {
        printf("(A, C, B)\n----> %d, %d, %d", a, c, b);
    }
    else if (b >= a && a >= c)
    {
        printf("(B, A, C)\n----> %d, %d, %d", b, a, c);
    }
    else if (b >= c && c >= a)
    {
        printf("(B, C, A)\n----> %d, %d, %d", b, c, a);
    }
    else if (c >= a && a >= b)
    {
        printf("(C, A, B)\n----> %d, %d, %d", c, a, b);
    }
    else if (c >= b && b >= a)
    {
        printf("(C, B, A)\n----> %d, %d, %d", c, b, a);
    }
    else
    {
        printf(" <---- Todos Iguales!");
    }
    printf("\n\n\n");
    getchar();

    return 0;
}