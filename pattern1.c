/*
5       4       3       2       1
5       4       3       2
5       4       3
5       4
5
*/

#include <stdio.h>
#include <conio.h>
int main()
{

    int num = 5;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 5; i >= j; i--)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }

    return 0;
}