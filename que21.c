#include <stdio.h>
int main()
{
    char operation;
    printf("enter the symbol in front of operation to perform the corresponding operation \n + addition\n - subtraction (first - second)\n * multiplication\n / division greatest integer(first/second)\n");
    scanf("%c",&operation);
    int a,b;
    printf("enter two numbers");
        scanf("%d %d",&a,&b);
    switch(operation)
        {
        case '+' : printf("addition = %d",a+b);
                 break;
        case '-' : printf("subtraction = %d",a-b);
                 break;
        case '*' : printf("multiplication = %d",a*b);
                 break;
        case '/' : printf("division (greatest integer)",a/b);
                 break;
        default : printf("invalid operation symbol");
        }
}
