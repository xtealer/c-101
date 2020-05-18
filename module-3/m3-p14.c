/*
* module 3
* problem 14
*
* Generate the FIBONACCI series up to a given number by the user.
*/

/* imported libraries */
#include <stdio.h>

/* entry point */
int main(int argc, char *argv[])
{
    int res = 0, n2 = 0, xc = 0, buff = 0;

    printf("\n===========================================\n      Serie FIBONACCI (12 Repeticiones)\n===========================================\n");
    while (xc <= 3)
    {
        if (xc <= 2)
        {
            printf(" Repeticion %d | %d\n", xc, res);
            res = 1;
            xc++;
        }
        else
        {
            for (xc; xc <= 12; xc++)
            {
                res += n2;
                n2 += res;
                printf(" Repeticion %d | %d\n", xc, res);
                xc++;
                printf(" Repeticion %d | %d\n", xc, n2);
            }
        }
    }
    buff = getchar();

    return 0;
}