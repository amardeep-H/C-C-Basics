#include <stdio.h>
#include <conio.h>

#include "extern.c"

extern int ext;

int main()
{
    printf("%d", ext);
    return 0;
}