#include <stdio.h>
#include <conio.h>

long decToBin(int num)
{

    static long rem, binNum, factor = 1;

    if (num != 0)
    {
        rem = num % 2;
        binNum = binNum + rem * factor;
        factor = factor * 10;
        decToBin(num / 2);
    }

    return binNum;
}

int main()
{
    int num = 5;
    long res = decToBin(num);
    printf("Binary Number is  : %ld", res);

    return 0;
}

/*
long decToBin(int decNo)
{
    static long biNo, r, fctor = 1;

    if (decNo != 0)
    {
        r = decNo % 2;
        biNo = biNo + r * fctor;
        fctor = fctor * 10;
        decToBin(decNo / 2);
    }
    return biNo;
}

*/
