/**
 * temperature conversion program with heading above table
 * print Fahrenheit temps with their Celsius equivalents
 * made by: Geek_Nabil
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
    printf("Temp in F:\tTemp in C:\n");

    // calculate and print celsius temp from 0F upto 300F
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%i\t\t%.1f\n", fahr, (fahr - 32.0) * 5.0 / 9.0);


}