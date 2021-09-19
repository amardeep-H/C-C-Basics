/*print a to z */

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch = 'a';
    for (char i = ch; i <= 'z'; i++)
    {

        printf("%c\t", i);
    }

    return 0;
}