#include <stdio.h>
#include <conio.h>
int count(int n)
{
    static int counter = 0;
    if (n != 0)
    {
        counter += 1;

        count(n / 10);
    }
    return counter;
}

int main()
{
    int num, res;
    printf("Enter a number \n");
    scanf("%d", &num);
    res = count(num);
    printf("%d\t", res);
    return 0;
}