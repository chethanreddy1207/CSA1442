#include<stdio.h>
int main()
{
	int a,b,c,o;
	printf("enter the numbers to perform operation: ");
	scanf("%d%d",&a,&b);
	printf("choose the operator\n1.+\n2.-\n3.*\n4./\n");
	scanf("%d",&o);
	printf("identifiers are : %d %d\n",a,b);
    switch(o)
    {
    	case 1:c=a+b;
    	printf("operator: '+'");
    	printf("\nconstant:%d",c);
    	break;
    	case 2:c=a-b;
    	printf("operator: '-'");
    	printf("\nconstant:%d",c);
    	break;
    	case 3:c=a*b;
    	printf("operator: '*'");
    	printf("\nconstant:%d",c);
    	break;
    	case 4:c=a/b;
    	printf("operator: '/'");
    	printf("\nconstant:%d",c);
    	break;
    	default: printf("enter the valid operator");
	}
	
}
