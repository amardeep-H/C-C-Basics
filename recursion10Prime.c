//finds given number is prime or not

#include <stdio.h>
#include <conio.h>

void prime(int num, int sta)
{

    int end = num / 2;
    if (sta <= end)
    {
        if (num % sta == 0)
        {
            printf("NOT Prime\n");
        }
        else
        {
            prime(num, sta + 1);
        }
    }
    else
    {
        printf("Prime Number");
    }
}
int main()
{
    int num = 103;
    prime(num, 2);
    return 0;
}