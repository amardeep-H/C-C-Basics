/**/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m, n;
    float a, b;
    scanf("%d%d", &m, &n); //dont give space between %d%d it will take 1 extra line of input..same for below line
    scanf("%f%f", &a, &b);
    printf("%d %d  \n", m + n, m - n);
    printf("%0.1f %0.1f ", a + b, a - b);

    return 0;
}