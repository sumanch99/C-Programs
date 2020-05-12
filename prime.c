#include <stdio.h>
main()
{
	int n,i,p;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	if(n==1)
	 {
	 	printf("\nThere is no prime number");
	 }
	else
	 {printf("\nPrime numbers are:");
	 p=0;
	 for(i=2;i<=n;i++)
	  {
	  	if(n%i==0)
	  	 {
	  	 	p=1;
		   }
	    else
	     {
	     	printf("\n%d",i);
		 }
	  }
	 }
}
