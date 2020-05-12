#include <stdio.h>
main()
{
	int i,n;
	float x,s,t;
	printf("\nEnter the values of n,x:");
	scanf("%d %f",&n,&x);
	s=t=i=1;
	while(i<=n)
	{
		t=t*(-x);
		s=s+t;
		i++;
	}
	printf("\nResult is:%f",s);
}
