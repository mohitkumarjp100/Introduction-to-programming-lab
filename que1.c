#include <stdio.h>
int main()
{
    float P, R, T, SI;
    printf("enter principal amount");
    scanf("%f",&P);
    printf("enter rate of interest");
    scanf("%f",&R);
    printf("enter time (years)");
    scanf("%f",&T);
    SI = P*R*T/100;
    printf("your simple interest is=%f", SI);
}

