#include <stdio.h>
int main()
{  
    int a, b;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("swapped the numbers first=%d\n" "second=%d", a, b);
}
