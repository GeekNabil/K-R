/**
 * count blanks, tabs and newlines
 * made by: Geek_Nabil
 */

#include <stdio.h>

int main(void)
{
    // declare and initialize
    int blanks, tabs, newlines, c;
    blanks = tabs = newlines = 0;

    // if not EOF, get char and check if it equal blank, tab or newline
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            blanks++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            newlines++;
    }

    printf("blanks = %i\ntabs = %i\nnewline = %i\n", blanks, tabs, newlines);

}