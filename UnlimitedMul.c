/*perform multiplication untill user inputs "n" as choice */

#include <stdio.h>
#include <conio.h>
int main()
{

    int num1, num2, resMul;
    char sel;
    do
    {

        printf("Enter number 1 \n");
        scanf("%d", &num1);
        printf("Enter number 2 \n");
        scanf("%d", &num2);

        resMul = num1 * num2;
        printf("%d\n", resMul);
        printf("Enter choice : (y or n)\n");
        fflush(stdin);
        scanf("%c", &sel);
        if (sel == 'n' || sel == 'N')
        {
            break;
        }

    } while (sel == 'y' || sel == 'Y');

    return 0;
}