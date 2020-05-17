/*
* module 1 - problem 2
* Given values **a** and **b** solve the following equation `(x + y) / 3`,
* show the answer as output.
*/

/* imported libraries */
#include <stdio.h>

/* 
* calculate result  given (float a, float b)
*/
float calculate_result(float a, float b)
{
    return (a + b) / 3;
}

/* entry point */
int main(int argc, char *argv[])
{
    float result = 0;
    float a = 0.00;
    float b = 0.00;

    printf("Operacion (A+B)/3\nValor de A\n");
    scanf("%f", &a);

    printf("Valor de B\n");
    scanf("%f", &b);

    result = calculate_result(a, b);

    printf("---------------------------------\nResultado = %.2f\n", result);
    getchar();

    return 0;
}