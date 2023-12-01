#include<stdio.h>
int main()
{
	char str[20];
	printf("enter the operator:");
	gets(str);
	switch(str[0])
	{
		case'+':
			printf("addition");
			break;
		case'-':
			printf("subtraction");
			break;
		case'*':
			printf("multiplication");
			break;
			case'/':
				printf("division");
			break;
			
	}
		
}
