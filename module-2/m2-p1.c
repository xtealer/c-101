/*
* module 2
* problem 1
* Given **5 califications** of a student, show Approved if it's **average** is at least 71
* or Failed if it's average is below.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int calif;
    float average;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese la Calificacion %d\n", i + 1);
        scanf("%d", &calif);

        /* remove \n */
        getchar();

        average = average + calif;
    }

    average = average / 5;

    if (average >= 71)
    {
        printf("++++++++++APROBADO++++++++++\npromedio de %.2f\n", average);
    }
    else if (average < 71)
    {
        printf("----------REPROBADO----------\npromedio de %.2f\n", average);
    }
    getchar();

    return 0;
}