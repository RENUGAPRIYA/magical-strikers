#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a*b;
	if(c%2==0)
	{
		printf("this is even");
	}
	else
	{
		printf("this is odd");
	}
	return 0;
	}
