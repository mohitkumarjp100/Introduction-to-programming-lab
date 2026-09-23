#include <stdio.h>
int main()
{
    int operation;
    printf("enter the number in front of operation to perform the corresponding operation \n 1 addition\n 2 subtraction (first - second)\n 3 multiplication\n 4 division greatest integer(first/second)\n");
    scanf("%d",&operation);
    int a,b;
    printf("enter two numbers");
        scanf("%d %d",&a,&b);
    switch(operation)
        {
        case 1 : printf("addition = %d",a+b);
                 break;
        case 2 : printf("subtraction = %d",a-b);
                 break;
        case 3 : printf("multiplication = %d",a*b);
                 break;
        case 4 : printf("division (greatest integer)",a/b);
                 break;
        default : printf("invalid operation number");
        }
}
