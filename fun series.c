#include <stdio.h>
void fun(int);
void main(void)
{
	int n;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	fun(n);
}
void fun(int a)
{
	int i;
	for(i=a;i>=1;i--)
		{
			printf(" %d",i);
		}
	return;	
}
