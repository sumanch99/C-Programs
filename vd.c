#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <malloc.h>
struct record
	{
		char prod[20];
		int quan;
		char rem[20];
	};
typedef struct record rd;
void main()
{
	  int ch,i=0,n,r=0;
	  rd *a;
	  printf("\n                     -:Welcome to this server:-");
   	  printf("\nPress any key to continue");
	  getch();
START:printf("\nPlease Enter your choice to perform:");
	  printf("\n\n1:Enter new record.");
	  printf("\n2:Show all records.");
      printf("\n0:To exit.\n");
      printf("\nYour Choice:");
	  scanf("%d",&ch);
      switch(ch)
	      {  case 1:a=(rd*)malloc(sizeof(rd));
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
	                  }while(getchar()!='N');
	                printf("\nOperation done.");
	      }
	

