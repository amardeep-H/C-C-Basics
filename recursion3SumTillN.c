#include <stdio.h>
#include <conio.h>

/*
void printSum(int i, int n, int sum){
if(i==n){
    sum+=i;
    prinf("%d",sum);
    return;
    }
    sum += i;
    printSum( i+1, n, sum)
}

*/

int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int final = n + sumN(n - 1);
    return final;
}
int main()
{
    int n = 5;
    int ai = sumN(n);
    printf("%d", ai);
    return 0;
}
