#include<stdio.h>
#include <malloc.h>
void main()
{
    int **a,**b,**c,m,n,p,q,i,j,k;
    printf("\nEnter the dimension of first matrix(row,column):");
    scanf("%d %d",&m,&n);
    printf("\nEnter the dimension of second matrix(row,column):");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("\nMatrix multiplication is not possible.");
        exit(1);
    }
    a=(int**)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
        a=(int*)malloc(n*sizeof(int));
    b=(int**)malloc(p*sizeof(int*));
    for(i=0;i<m;i++)
        b=(int*)malloc(q*sizeof(int));
    c=(int**)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
        c=(int*)malloc(q*sizeof(int));

    printf("\nEnter elements for %d rows and % columns for 1st matrix in rowwise:",m,n);
    for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",a[i][j]);
   printf("\nEnter elements for %d rows and % columns for 2nd matrix in rowwise:",p,q);
   for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                scanf("%d",b[i][j]);
   c[0][0]=0;
   for(i=0;i<m;i++)
       for(j=0;j<q;j++)
             for(k=0;k<n;k++)
                  c[i][j]=c[i][j]+a[i][k]*b[k][j];
   printf("\nResultant matrix:");
   for(i=0;i<m;i++)
   {
      printf("\n");
      for(j=0;j<q;j++)
          printf("%d",c[i][j]);
   }

}
