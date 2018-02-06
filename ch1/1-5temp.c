/**
 * temperature conversion program
 * print Celsius temps with their Fahrenheit equivalents
 * print table in reverse order
 * made by: Geek_Nabil
 **/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
    printf("Temp in C:\tTemp in F:\n");

    // calculate and print celsius temp from 0F upto 300F
    for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%i\t\t%.1f\n", fahr, (fahr - 32.0) * 5.0 / 9.0);


}