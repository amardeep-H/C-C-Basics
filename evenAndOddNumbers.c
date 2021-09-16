/*print even and odd numbers from 0 to 100 */

#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 0;
    while (n <= 100)
    {
        printf("%d\t", n); //it does not iterate for odd numbers un-necesserily
        n += 2;
    }
}
/*
....following program is less efficient to print only even or only odd numbers...


 #include <stdio.h>
#include <conio.h>

int main()
{

    int num = 0;
    while (num <= 100)
    {

        if (num % 2 == 0)
        {
            printf("%d\t even\n", num);
        }
        else
        {
            printf("%d\t odd\n", num);
        }

        num++;
    }

    return 0;
}

*/