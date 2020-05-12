#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
	char name[20];
	int roll;
	struct linked_list *next;
};
typedef struct linked_list node;
void main()
{
	node *rd;
	rd=(node*)malloc(sizeof(node));
	input(rd);
	output(rd);
}
void input(node *rd)
{
	printf("\nEnter Roll Number(-999 to exit):");
	scanf("%d",&rd.roll);
	if(rd.roll!=-999)
	{
		printf("\nEnter Name:");
		gets(rd.name);
		rd->next=(node*)malloc(sizeof(node));
		input(rd.next);
	}
	else
		rd->next=0;
}
void output(node *rd)
{
	printf("\n Name          ROLL");
	while(rd.next)
	{
		printf("%s\t%d",rd.name,rd.roll);
		output(rd.next);
	}
	printf("%s\t%d",rd.name,rd.roll);
}
