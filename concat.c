#include <stdio.h>
void main(void)
{
	FILE *fp,*ft,*fd;
	char fname[20],tname[20],dname[20],x,y;
	printf("\nEnter source file name:");
	scanf("%s",fname);
	fflush(stdin);
	printf("\nEnter the file name you want to concat: ");
	scanf("%s",tname);
	fp=fopen(fname,"r");
	ft=fopen(tname,"r");
	if(!fp||!ft)
			printf("\nInvalid file name.");
	else{
	printf("\nEnter the resultant  file name:");
	scanf("%s",dname);	
	fd=fopen(dname,"w");
	if(!fd)
			printf("\nFile %s opening error.",dname);
	else{		
	while((x=getc(fp))!=EOF)
		putc(x,fd);
	while((y=getc(ft))!=EOF)
		putc(y,fd);
	fclose(fp);
	fclose(ft);
	fclose(fd);			
        }
       }
}
