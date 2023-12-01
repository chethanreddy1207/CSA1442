#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("enter the stridng: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]== '/' && str[i+1]== '/')
		{
		printf("comment");
		break;
	}
		else
		{
		printf("not comment");
		break;
	}
	}
	return 0;
}
