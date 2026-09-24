#include <stdio.h>
int main(void)
{
    float x,n,tpr;
    printf("enter the value of n:");
    scanf("%f",&n);
    printf("enter the value of x:");
    scanf("%f",&x);
    if(n == 1)
    {
        printf( "Y = %f",1+x);
    }
    else if(n == 2)
    {
        printf("Y = %f",1+x/n);
    }
    else if(n == 3)
        {
            printf("Y = %f",1+x*x*x);   
        }
        else
        {
            printf("Y = %f",1+n*x);
        }
    }