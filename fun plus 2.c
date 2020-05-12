#include <stdio.h>
int fun(int);
void main(void)
{
	int n,r;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	r=fun(n);
	printf("\nResult is: %d",r);
}
int fun(int a)
{
	int i,s=0;
	for(i=1;i<=2*a-1;i+=2)
		s=s+i;
	return(s);	
}
