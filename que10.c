
#include <stdio.h>
int main()
{
    int M, P, C, E, CM;
    printf("enter marks in Mathematics, Physics, Chemistry (out of 200) and Entrance exam (out of 100)");
    scanf("%d %d %d %d", &M, &P, &C, &E);
    CM = (M + P + C)/2 + E;
    printf("Cutoff marks for given scores= %d", CM);
}
