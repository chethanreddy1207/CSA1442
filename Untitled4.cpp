#include<stdio.h> 
#include<ctype.h>
#include<string.h>
int main()
{
	char str[10]; 
  int flag, i=1;
  printf("\n Enter an identifier:"); 
	gets(str);
 if(isalpha(str[0]))
		flag=1; 
		else
		printf("\n Not a valid identifier");
      for(i=1;i<strlen(str);i++)
      {
		if(!isdigit(str[i])&&!isalpha(str[i]))
		{
			flag=0; 
			break;
		} 
	}
if(flag==1)
		printf("\n Valid identifier"); 
}

