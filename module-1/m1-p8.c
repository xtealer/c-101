/*
* module 1
* problem 8
*
* Ask for the **name**, **weight** (in tons) and **height** (in feet) of a dinosaur.
* Show as output it's name with the given **weight** (converted to kilograms)
* and it's **height** (converted to meters). `(1 ton = 1000 kg); (1 feet = 0.3047 m)`.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    float peso = 0, altura = 0, ralt = 0;
    int rpe = 0;
    char nombre[30];

    printf("\nIngrese el Nombre del Dinosaurio\n");
    scanf("%s", &nombre);

    printf("\nIngrese su Estatura en Pies (Ft)\n");
    scanf(" %f", &altura);

    printf("\nIngrese su Peso en Toneladas (Ton)\n");
    scanf("%f", &peso);

    /* eats extra \n */
    getchar();

    rpe = peso * 1000;
    ralt = altura * 0.3047;

    printf("\n=======================================\nEstimad@ %s\n\nSu Peso es de %d Kilogramos !\nSu Estatura es de %.2f Metros !\n\n\n\n", nombre, rpe, ralt);
    getchar();

    return 0;
}