#include <stdio.h>
#define max 100
void main(void)
{
	int a[max][max],m,n,i,j,b[max][max];
	printf("\nEnter No. of rows and columns:");
	scanf("%d %d",&m,&n);
	printf("\nEnter elements for %d rows and %d columns rowwise:\n",m,n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\nOriginal matrix:\n");
	for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
				printf(" %d",a[i][j]);
		}
	for(j=0;j<n;j++)
		for(i=0;i<m;i++)
			scanf("%d",&b[i][j]);	
	printf("\nTransposed Matrix:\n");	
	for(i=0;i<n;i++)
		{
			printf("\n");
			for(j=0;j<m;j++)
				printf(" %d",b[i][j]);
		}
					
}
