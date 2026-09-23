#include <stdio.h>

int main() 
{
   long int num,fact=1,tpr;
    printf("enter a number");
    scanf("%ld",&num);
    tpr = num;
    while(num>0)
        {
          fact= fact*num;
              num -=1;
        }
    printf("factorial of %ld is %ld",tpr,fact);
}
