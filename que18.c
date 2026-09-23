#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter three distinct numbers");
    scanf("%d %d %d",&a,&b,&c);
    a>b && a>c?printf("%d is greatest",a):b>c && b>a?printf("%d is greatest",b):c>a && c>b?printf("%d is greatest",c):printf("invalid numbers entered");
}
