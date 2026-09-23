#include <stdio.h>
int main()
{
    int gross, basic, housing, bonus, overtime;
    printf("enter your basic salary, housing allowance, bonus, and overtime income");
    scanf(" %d %d %d %d", &basic, &housing, &bonus, &overtime);
    gross = basic + housing + bonus + overtime;
    printf("your gross salary is=%d", gross);


}
