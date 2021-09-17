#include <stdio.h>
#include <conio.h>
/*
int main()
{
    int count = 0, num;
    printf("enter num\n");
    scanf("%d", &num);
    do
    {
        count++;
        num /= 10;
    } while (num != 0);

    printf("%d", count);

    return 0;
}

*/
#include <math.h>
int main()
{
    int count = 0, num;
    printf("enter num\n");
    scanf("%d", &num);
    count = (num == 0) ? 1 : (log10(num) + 1);

    printf("%d", count);

    return 0;
}