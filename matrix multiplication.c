/*Matrix Multiplication*/
#include <stdio.h>
#define max 100
void main(void)
{
	int a[max][max],b[max][max],c[max][max], m,n,p,q,i,j,x,s;
	printf("\nEnter row & column No. for 1st:");
	scanf("%d %d",&m,&n);
	printf("\nEnter row and column No. for 2nd:");
	scanf("%d %d",&p,&q);
	if(n!=p)
	 printf("\nCant be multiplied.");
	else
	 {
	    printf("\nEnter Elements for 1st:\n");
	    for(i=0;i<m;i++)
			for(j=0;j<n;j++)
		            scanf("%d",&a[i][j]);
		printf("\nEnter for 2nd:\n");
		for(i=0;i<p;i++)
			for(j=0;j<q;j++)
				scanf("%d",&b[i][j]);
		s=0;
		for(i=0;i<m;i++)
			for(j=0;j<q;j++)
				{
					for(x=0;x<n;x++)
						s=s+a[i][x]*b[x][j];
					c[i][j]=s;
					s=0;	
				}
		printf("\nMultiplied Matrix:\n");
		for(i=0;i<m;i++)
			{
				printf("\n");
				for(j=0;j<q;j++)
					printf(" %d",c[i][j]);
			}				            
	  } 
}
