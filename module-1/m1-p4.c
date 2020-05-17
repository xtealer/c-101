/*
* module 1
* problem 4
*
* Given the **height** and **width** of a rectangle,
* calculate and print on screen the area and perimeter of it
* `area = height * width; perimeter = 2 * (height + width)`.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    float base, altura, perimetro, area;

    printf("Introduzca el Valor de Altura\n");
    scanf(" %f", &altura);

    printf("Introduzca el Valor de Base\n");
    scanf(" %f", &base);

    perimetro = (base + altura) * 2;

    area = base * altura;

    printf("Perimetro = %.2f\nArea = %.2f\n", perimetro, area);

    getchar();
    return 0;
}
