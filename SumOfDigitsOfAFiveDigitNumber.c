/*
Given a five digit integer, print the sum of its digits.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int a = 0;
    int sum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }

    printf("%d", sum);
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int n,last_num,sum = 0,temp;
    scanf("%d", &n);
    temp = n;
 
    while(temp > 0)
    {
        last_num = temp %10;
        sum = sum + last_num;
        temp = temp/10;
    }
    printf("%d",sum);
    return 0;
} 
*/