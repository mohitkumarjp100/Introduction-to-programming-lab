#include <stdio.h>
int main()
{
    int t = 31558150, tsec, thr, tmin;
    printf("earth takes %f seconds to for a period of revolution",t);
    thr = t/3600;
    tmin = (t%3600)/60;
    tsec = (t%3600)%60;
    printf("period of revolution is %d hours, %d minutes, and %d seconds", thr, tmin, tsec);
}
