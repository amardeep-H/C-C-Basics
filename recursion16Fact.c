
//print factorial of number

#include <stdio.h>
#include <conio.h>

int fact(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    int fact_n_m_1, fact_n; //factorial of n-1th term & factoial of nth term
    fact_n_m_1 = fact(n - 1);
    fact_n = n * fact_n_m_1;
    return fact_n;
}

int main()
{
    int n = 5;
    int res = fact(5);
    printf("%d", res);

    return 0;
}