#include <stdio.h> 
int main()
{
	char enter;
	printf("enter a character\n");
	scanf("%c", &enter);
	if (enter >= 'A' && enter <= 'Z')
	{ 
	   printf("Uppercase Letter");
	}
	else if(enter >='a' && enter <='z')
	{ 
        printf("Lowercase Letter");
	}
	else if(enter >='0' && enter <='9')
	{
		printf("digit");
	}
	else
	{
		printf("you have entered a special symbol");
	}
    return 0;
}
