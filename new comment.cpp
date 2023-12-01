#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("enter the string:");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='/' && str[i+1]=='/')
		{
			printf("it is a comment");
			break;
		}
		else
		{
		
		printf("not a comment:");
		break;
	    }
	}
}
