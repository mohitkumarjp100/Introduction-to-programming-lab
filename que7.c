#include <stdio.h>
int main()
{
    float base, height, area;
    printf("enter base and height of triangle");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("area of triangle=%f", area);
}
