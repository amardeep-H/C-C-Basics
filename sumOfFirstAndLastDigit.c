#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{

    int num, lastDig, firstDig, digits;

    printf("Enter Num \n");
    scanf("%d", &num);

    lastDig = num % 10;

    digits = (int)log10(num);//it gives number of digits in a number + 1
    printf("digits : %d\n", digits);

    firstDig = (int)(num / pow(10, digits));

    int sumOfFirstAndLastDigits = firstDig + lastDig;

    printf("sumOfFirstAndLastDigits : %d\n", sumOfFirstAndLastDigits);

    return 0;
}