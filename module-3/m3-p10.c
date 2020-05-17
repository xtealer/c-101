/*
* module 3
* problem 10
*
* Get 3 multiples up to 30, starting from 3.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int resum = 0, conf;

    printf("================================\n  Multiplos Del 3 Menores A 30\n================================\n");
    for (conf = 3; conf < 30; conf += 3)
    {
        printf("              %d\n", conf);
        resum += conf;
    }

    printf("================================\n   La Suma De Ellos Es:   %d\n", resum);
    getchar();

    return 0;
}