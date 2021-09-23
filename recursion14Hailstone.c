#include <stdio.h>
#include <conio.h>
int nextInt(int a)
{
    int i = a;
    if (i % 2 == 0)
    {
        i = i / 2;
    }
    else
    {
        i = a * 3 + 1;
    }
}

int hailst(int num)
{
    int i = num;
    if (i == 1)
    {
        printf("%d\t", i);
    }
    else
    {
        printf("%d\t", i);
        hailst(nextInt(i));
    }
}

int main()
{
    int st = 13;
    hailst(st);
    return 0;
}