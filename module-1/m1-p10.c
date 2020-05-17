/*
* module 1
* problem 10
*
* Given values **a**, **b** and **c** solve the following equation `(a * (3 + b)) / (c *(3 - b))`, show the answer as output.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int a = 0, b = 0, c = 0;
    float result = 0;

    printf("Operacion a(3 + b)/c(3 - b)\nValor de a\n");
    scanf("%d", &a);

    printf("Valor de b\n");
    scanf(" %d", &b);

    printf("Valor de c\n");
    scanf(" %d", &c);

    /* eat extra \n */
    getchar();

    result = (a * (3 + b)) / (c * (3 - b));

    printf("Resultado %.2f\n", result);
    getchar();

    return 0;
}