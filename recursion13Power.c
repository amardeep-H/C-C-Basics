#include <stdio.h>
#include <conio.h>
int power(int x, int y)
{
    long int result = 1;
    if (y == 0)
        return result;
    result = x * (power(x, y - 1));
}
int main()
{
    int num, pow;
    printf("Enter Number : \t ");
    scanf("%d", &num);
    printf("Enter Power : \t");
    scanf("%d", &pow);
    int res = power(num, pow);
    printf("%d", res);
    return 0;
}