#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[10];
	int i,flag=1;
	printf("enter the identifier:");
	gets(str);
	if(isalpha(str[0]))
	flag=1;
	else
	printf("it is not a valid identifier");
	
	if(flag==1)
	printf("identifier");
}
