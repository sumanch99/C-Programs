#include<stdio.h>
void main(void)
{
	FILE *fp;
	char fname[20],x,ch;
	int line=0,spc=0,chtr=0,tab=0;
	printf("\nEnter File name: ");
	scanf("%s",fname);
	fp=fopen(fname,"r");
	if(!fp)
		{
			printf("\nFile %s does not exist.",fname);
			exit(1);
		}
	printf("\Content of the file:");
	while(!feof)
	{
		x=getc(fp);
		putchar(x);
		}	
	while(ch=fgetc(fp)!=EOF)
	{
		if(ch==' ')
		   spc++;
		else
		  if(ch=='\t')
		     tab++;
		  else
		     if(ch=='\n')
			    line++;   
		chtr++;       
	}
	fclose(fp);
	printf("\nNumber of character,lines,tabs,blank spaces are respectively: %d %d %d %d",chtr,line,tab,spc);
		
		
}
