/*

output will be :
1
2
3
4
5
*/

/*
int numPrint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}

*/

#include <stdio.h>
#include <conio.h>

int printN(int n)
{

    if (n == 0)
    {

        return 1;
    }

    printN(n - 1);
    printf("%d\n", n); //if we put this line above ""printN(n - 1);"" this line we will get output as 5 4 3 2 1
}

int main()
{
    printN(5);
    return 0;
}