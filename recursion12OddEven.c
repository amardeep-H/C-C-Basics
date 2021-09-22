#include <stdio.h>
#include <conio.h>

void printOddEven(int sta, int end)
{
    if (sta <= end)
    {
        if (sta % 2 == 0 || sta % 2 != 0)
        {
            printf("%d\t", sta);
            printOddEven(sta + 2, end);
        }
        }
}

int main()
{
    static int a, b;
    printf("Enter first Number : \n");
    scanf("%d", &a);
    printf("Enter Second Number : \n");
    scanf("%d", &b);

    printOddEven(a, b);
    printf("\n");
    printOddEven(a + 1, b);
    return 0;
}