#include <stdio.h>
#define max 100
void main(void)
{
	int a[max][max],b[max][max],c[max][max],m,n,i,j;
	printf("\nNo. of rows and columns:");
	scanf("%d %d",&m,&n);
	printf("\nEnter elements rowwise 1st matrix:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\nEnter elements rowwise 2nd matrix\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]-b[i][j];						
	printf("\nresultant matrix\n");
	for(i=0;i<m;i++)
	 {
	 	printf("\n");
		for(j=0;j<n;j++)
			printf(" %d",c[i][j]); 		
	 }		
}
