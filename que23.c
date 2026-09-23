#include <stdio.h>
int main()
{
    int a,b,tpr,pow=1;
    printf("enter a number to be base ");
        scanf("%d",&a);
        printf("enter a number to be power ");
        scanf("%d",&b);
    tpr = b;
    while(b>0)
        {
            pow = pow*a;
                b -= 1;
        }
    printf("Base %d powered %d = %d",a,tpr,pow);
}
