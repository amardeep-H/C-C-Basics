#include <stdio.h>
#include <conio.h>

int sumDig(int n)
{
    static int sum = 0;
    if (n != 0)
    {
        sum = sum + (n % 10);
        sumDig(n / 10);
    }

    return sum;
}

int main()
{

    int num;
    printf("Enter a Number : \n");
    scanf("%d", &num);
    int na = sumDig(num);
    printf("%d\n", na);

    return 0;
}