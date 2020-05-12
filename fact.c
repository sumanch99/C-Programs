#include <stdio.h>
int fun(int);
void main(void)
{
	int n,s;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	s=fun(n);
	printf("\nResult is %d",s);
}
int fun(int x)
{
	if(x<=0)
		return(0);
	return(2*x-1+fun(x-1));	
}
