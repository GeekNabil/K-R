/**
 * temperature conversion program
 * print Celsius temps with their Fahrenheit equivalents
 * made by: Geek_Nabil
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
    printf("Temp in C:\tTemp in F:\n");

    // calculate and print celsius temp from 0F upto 300F
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%.1f\t\t%i\n", (fahr - 32.0) * 5.0 / 9.0, fahr);


}