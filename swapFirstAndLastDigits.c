// assume number taken is 12345

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{

    int num, lastDigit, firstDigit, digits, swappedNum;
    printf("Enter Number : \n");
    scanf("%d", &num);
    lastDigit = num % 10;
    digits = (int)log10(num); //number of digits in a number + 1;
    firstDigit = (int)(num / pow(10, digits));

    swappedNum = lastDigit;                                        // swappedNum=5
    swappedNum = swappedNum * ((int)round(pow(10, digits)));       //swappedNum=5*10000 = 50000
    swappedNum = swappedNum + num % ((int)round(pow(10, digits))); //swappedNum = 50000 + 2345= 52345
    swappedNum = swappedNum - lastDigit;                           // swappedNum = 52345 - 5 = 52340
    swappedNum = swappedNum + firstDigit;                          //swappedNum = 52340 + 1 = 52341
    printf("%d", swappedNum);
    return 0;
}