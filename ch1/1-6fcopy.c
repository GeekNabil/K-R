/**
 * verify that expression getchar() != EOF is 0 or 1
 * made by: Geek_Nabil
 **/

#include <stdio.h>

int main(void)
{
    // use %i as placeholder for boolean value
    printf("%i\n", getchar() != EOF);
}