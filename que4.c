#include <stdio.h>
int main()
{
    float temp_f, temp_c;
    printf("enter temperature in fahrenheit");
    temp_c = (temp_f - 32)*5/9;
    scanf("%f", &temp_f);
    printf("temperature in celsius=%f",temp_c);
}
