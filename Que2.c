#include <stdio.h>
int main()
{
    printf("enter your marks in PHY, MATH, CHEM, ENG, PE");
    int  PHY, MATH, CHEM, ENG, PE;
    scanf("%d %d %d %d %d", &PHY, &MATH, &CHEM, &ENG, &PE);
    int total = PHY + MATH + CHEM + ENG + PE;
    printf("your total marks are=%d\n", total);
    int percent = (total/500)*100;
    printf("your percentage is=%f", (float)total / 5);
}
