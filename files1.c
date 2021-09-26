#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *f;
    char ch;
    f = fopen("character.txt", "w");
    fputs("amar", f);
    fclose(f);
    f = fopen("character.txt", "r");
    while ((ch = fgetc(f)) != EOF)
    {
        printf("%c", ch);
    }
    return 0;
}