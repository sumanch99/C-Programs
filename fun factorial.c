#include <stdio.h>
int fun(int);
void main(void)
{
	int n,r;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	r=fun(n);
	printf("\nFactorial %d is : %d",n,r);
}
int fun(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
		fact=fact*i;
	return(fact);	
}
