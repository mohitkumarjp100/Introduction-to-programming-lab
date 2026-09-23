#include <stdio.h>
int main()
{
    int hrs, mins, sec, total_sec;
    printf("enter hours, minutes, and seconds in (hh mm ss) format");
    scanf("%d %d %d",&hrs,&mins,&sec);
    total_sec = hrs*3600 + mins*60 + sec;
    printf("time given converted to seconds = %d",total_sec);
}
