/* Output Should be : 
1.Circle
2.Rectangle
Enter your choice : 1
Enter Radius : 
3
radius = 3
Circumference of a Circle is : 18.851999 cm
Area Of circle is : 28.278000 Sqcm
*/

#include <stdio.h>
#include <conio.h>

void circle(int *rad)

{
    printf("radius = %d\n", *rad);
    printf("Circumference of a Circle is : %f cm\n", (float)(2 * 3.142 * (*rad)));
    printf("Area Of circle is : %f Sqcm\n ", (float)(3.142 * (*rad) * (*rad)));
}

void rect(int *len, int *bre)
{
    int aORec = *len * *bre;
    int pORec = 2 * (*len) * (*bre);

    printf("Area Of Rectangle : %d Sqcm\n", aORec);
    printf("Perimeter Of Rectangle : %d cm\n", pORec);
}

int main()
{

    int rad, len, bre, ch;
    printf("1.Circle\n2.Rectangle \n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter Radius : \n");
        scanf("%d", &rad);
        circle(&rad);
        break;

    case 2:
        printf("Enter length : \n");
        scanf("%d", &len);
        printf("Enter breadth : \n");
        scanf("%d", &bre);
        rect(&len, &bre);
        break;

    default:
        printf("Invalid Choice...!");
        break;
    }

    return 0;
}
