#include <stdio.h>
/*program to find 1-x+x^2-x^3+x^4-...+((-1)^n)(x^n)*/
float fun(int,float);
void main(void)
{
	int n;
	float x,s;
	printf("\nEnter the value of n and x:");
	scanf("%d %d",&n,&x);
	s=fun(n,x);
	printf("\nResult is: %f",s);
}
float fun(int a,float b)
{
	int i;
	float t,r;
	r=1;
	t=1;
	for(i=1;i<=a;i++)
	 {
	 	t=t*(-b);
	 	r=r+t;
	 }
	return(r); 
}
