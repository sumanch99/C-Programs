#include <stdio.h>
#include <malloc.h>
struct record
	{
		char prod[20];
		int quan;
		char rem[20];
	};
typedef struct record rd;	
int entry(void);
int show(int);
void search(void);
void main()
{
	int ch,r=0;
	printf("\n                     -:Welcome to this server:-");
	printf("\nPlease Enter your choice to perform:");
	printf("\n\n1:Enter new record.");
	printf("\n2:Show all records.");
	printf("\n3:Search for a particular product.");
	printf("\n0:To exit.\n");
START: printf("\nYour Choice:");
	   scanf("%d",&ch);
    	switch(ch)
	      {  case 1: r=entry();
	         case 2: if(r==0)
	             {printf("\nNo records found.");
				  break;
				 }
		         show(r);
	                break;
	         case 3:  search();
		               break;
	         case 4:  edit();
		     break;
  	         case 0:  printf("\nThe End.");
	                  break;
	         default: printf("\nEntered wrong choice.");
			           goto START;
	      } 
}
int entry(void)
{
	int i=0,n;
	rd *a;
	a=(rd*)malloc(n*sizeof(rd));
	do{
		i++;
		fflush(stdin);
		printf("\nEnter Product name:");
		gets(a[i].prod);
		printf("\nEnter Quantity:");
		scanf("%d",&a[i].quan);
		fflush(stdin);
		printf("\nEnter Description:");
		gets(a[i].rem);
		fflush(stdin);
		printf("\nEnter another record?(y/n):");
	}while(toupper(getchar())!='N');
	printf("\nOperation done.");
	return(i);
}
int show(int r)
{
	int i;
	rd *a;
	printf("\nProduct Name            Quantity          Remedy");
	for(i=1;i<=r;i++)
	{
		printf("%s         %d       %s",a[i].prod,a[i].quan,a[i].rem);
			}		
haha:printf("\nDo you want to add any product?(y/n):");
	if(toupper(getchar())=='N')
		return(1);
	if(toupper(getchar())=='Y')
	 {do{
		 r++;
		 fflush(stdin);
		 printf("\nEnter Product name:");
		 gets(a[r].prod);
		 printf("\nEnter Quantity:");
		 scanf("%d",&a[r].quan);
		 fflush(stdin);
		 printf("\nEnter Description:");
		 gets(a[r].rem);
		 fflush(stdin);
		 printf("\nEnter another record?(y/n):");
	  }while(toupper(getchar())!='N');
	 }
	else
	 	{printf("\nInvalid input.");
		 goto haha;} 				
	printf("\nAgain display the list?");
	if(toupper(getchar())=='N')
		return(1);
	if(toupper(getchar())=='Y')
	{printf("\nProduct Name            Quantity          Remedy");
	for(i=1;i<=r;i++)
	{
		printf("%s         %d       %s",a[i].prod,a[i].quan,a[i].rem);
			}		
		
		}	
}


