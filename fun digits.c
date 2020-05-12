#include <stdio.h>
int fun(int);
void main(void)
{
	int n,r;
	printf("\nEnter an integer value:");
	scanf("%d",&n);
	r=fun(n);
	printf("\nOutput: %d",r);
}
int fun(int a)
{
	int s=0,x;
	x=a;
	while(a!=0)
	{
		s=s+a%10;
		a=a/10;
	}
	return(s);
}
