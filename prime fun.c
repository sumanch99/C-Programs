#include <stdio.h>
int prime(int);
void main(void)
{
	int x,flag;
	printf("\nEnter an integer value:");
	scanf("%d",&x);
	if(x<=1)
	 {
	 	printf("\n%d is neither prime nor non-prime.",x);
	 	
	 }
	flag=prime(x);
	if(flag=0)
		printf("\n%d is a prime number.",x);
	else
		printf("\n%d is not a prime number.",x);	 
}
int prime(int n)
{
	int a=0,i;
	for(i=2;i<=n;i++)
	 {
	 	if(n%i==0)
	 	 {
	 	 	a=1;
	 	 	break;
		  }
	 }
  return(a); 
}
