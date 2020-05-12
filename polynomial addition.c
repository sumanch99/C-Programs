#include<stdio.h>
#define max 100
struct polynomial{
	float coeff;
	float power;
};
typedef struct polynomial pnm;
int add(pnm *,pnm *,int,pnm *,int);
void input(pnm *,int);
void main()
{
	pnm y1[max],y2[max],result[max];
	int n1,n2,i,n;
	printf("\nHow many terms in the first polynomial?:");
	scanf("%d",&n1);
	printf("\nEnter 1st polynomial:");
	input(y1,n1);
	printf("\nHow many terms in the second polynomial?:");
	scanf("%d",&n2);
	printf("\nEnter 2nd polynomial:");
	input(y2,n2);
	n=add(result,y1,n1,y2,n2);
	printf("\nResult is:");
	for(i=1;i<=n;i++)
		{
			printf("%fx^%f+",result[i].coeff,result[i].power);
	    }
}
void input(pnm *y,int n)
{
	int i,j,k;
	for(i=1;i<=n;j++)
	{	
		scanf("%f%f",&y[i].coeff,&y[i].power);
		for(k=1;k<=2;k++)
			continue;
    }
}
int add(pnm *result,pnm *y1,int n1,pnm *y2,int n2)
{
	int i,j,k;
	for(k=1,i=1,j=1;i<=n1||j<=n2;i++,j++,k++)
		{
			if(y1[i].power==y2[i].power)
			{
				result[k].power=y1[i].power;
				result[k].coeff=y1[i].coeff+y2[j].coeff;
				continue;
			}
			result[k].power=y1[i].power;
			result[k].coeff=y1[i].coeff;
			k++;
			result[k].coeff=y2[j].coeff;
			result[k].power=y2[j].power;
		}
   	return(--k);
}
