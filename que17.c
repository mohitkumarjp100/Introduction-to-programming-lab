#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter three distinct numbers");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
    {
        max = a;
    }
    else if(b>a && b>c)
    {
        max = b;
    }
    else if(c>a && c>b)
    {
        max = c;
    }
    printf("%d is the greatest out of the three given numbers", max);
}
