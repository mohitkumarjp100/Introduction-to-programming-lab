
#include <stdio.h>
int main(void)
{
    int num,tab,i;
    printf("enter a number:");
    scanf("%d",&num);
        for(i=1;i<=10;i++)
        {
          tab = num*i;
          printf("%d x %d = %d\n",num,i,tab);
        }
}
