/**
 * copy input text to output, replacing each string of one
 * or more blanks by a single blank
 * made by: Geek_Nabil
 *
 */

#include <stdio.h>

#define SPACE ' '
#define NEWLINE '\n'

int main(void)
{

    int c;

    // get a char and check if it equal newline
    while ((c = getchar()) != NEWLINE)
    {
        // if not equal newline and not space print it
        if (c != SPACE)
            putchar(c);

        // if there is space print it once
        if (c == SPACE)
        {
            putchar(c);

            // make sure that space printed once and following spaces not printed
            while ((c = getchar()) != NEWLINE && c == SPACE)
                ;

            // print char that follow sequense of spaces
            putchar(c);
        }
    }
    // print new line for nice formatting
    putchar('\n');

}