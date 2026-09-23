#include <stdio.h>
int main()
{
    printf("enter total time in seconds");
    int t, hr, min, sec;
    scanf("%d", &t);
    hr = t/3600;
    min = (t%3600)/60;
    sec = (t%3600)%60;
    printf("time in hh:mm:ss format is %d hours,%d minutes,%d seconds", hr, min, sec);
}
