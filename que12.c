#include <stdio.h>
int main()
{
    char entry;
    printf("enter a character");
    scanf("%c", &entry);
    printf("ascii value of '%c' = '%d'", entry, entry);
}