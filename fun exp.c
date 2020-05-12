#include <stdio.h>
float fun(int,float);
void main(void)
{
	int n;
	float x,r;
	printf("\nEnter the value of n and x:");
	scanf("%d %d",&n,&x);
	r=fun(n,x);
	printf("\nResult is: %f",r);
}
float fun(int a,float b)
{
	int i,fact;
	float sum,term;
	sum=term=fact=1;
	for(i=1;i<=a;i++)
		{
			fact=fact*i;
			term=term*b;
			sum=sum+term/fact;
		}
	return(sum);
}

