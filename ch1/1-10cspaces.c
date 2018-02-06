/**
 * program that copy its input to its output. replacing each
 * tab by \t, each bachspace by \b and each backslash by \\
 * made by: Geek_Nabil
 */

#include <stdio.h>

#define NEWLINE '\n'
#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

int main(void)
{
    int c;

    while ((c = getchar()) != NEWLINE)
    {
        // check if c equal tab, backspace or backslash
        if (c == TAB)
        {
            printf("\\t");
        }
        else if (c == BACKSPACE)
        {
            printf("\\b");
        }
        else if (c == BACKSLASH)
        {
            printf("\\\\");
        }
        else
        {
            putchar(c);
        }
    }
    // print new line for nice formatting
    putchar('\n');
}