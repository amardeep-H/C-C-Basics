#include <conio.h>
#include <stdio.h>
int main()

{
    int arr[5], i;
    printf("Enter the Numbers : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("multiplied by 4 : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(arr + i) * 4);
    }
}
/*{

    int arr[5], i;
    printf("Enter 5 numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Mulplicated array\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", (arr[i] * 4));
    }
    return 0;
}*/