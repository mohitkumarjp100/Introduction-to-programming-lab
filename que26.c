#include <stdio.h>
int main()
{
   int N,tpr,sum=0,i=0;
    printf("enter the upper limit of sum of series(N):");
    scanf("%d",&N);
    
            if(N%2 == 0)
            {
                for(i=2;i<=N;i+=2)
                  {
                    sum= sum + i;
                }
                printf("sum of series is:%d",sum);

            }
            else
            {
                for(i=1; i<=N; i+=2)
                    {
                        sum += i;
                    }
                printf("sum of series is:%d",sum);
            }
        }
