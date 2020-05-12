#include <stdio.h>
#define max 100
void main(void)
{
	int a[max][max],m,n,i,j;
	printf("\nHow many rows and columns?:");
	scanf("%d %d",&m,&n);
	printf("\nEnter elements for %d rows and %d columns rowwise\n",m,n);
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
	   {
	    scanf("%d",&a[i][j]);
       }
    printf("\nResultant matrix rowwise:");
	for(i=0;i<m;i++) 
	{
		printf("\n");
		for(j=0;j<n;j++)
		 printf("%d ",a[i][j]);
	  }
	printf("\nResultant Matrix columnwise:");
	for(j=0;j<n;j++)
	 {
	 	printf("\n");
	 	for(i=0;i<m;i++)
	 	 printf("%d ",a[i][j]);
		 }    
}
