#include <stdio.h>
#define max 100
void input(int[],int);
void sort(int[],int);
main()
{
    int a[max],n,s;
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    input(a,n);
    sort(a,n);
}
void input(int b[],int k)
{
    int i;
    printf("\nEnter %d integer values:",k);
    for(i=0;i<k;i++)
        scanf("%d",&b[i]);
}
void sort(int a[],int l)
{
int i,j,t;
for(i=0;i<l-1;i++)
    {for(j=0;j<l-i-1;j++)
          if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    }printf("\nSorted array:");
    for(i=0;i<l;i++)
        printf(" %d",a[i]);
}
