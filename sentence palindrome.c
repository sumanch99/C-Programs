#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,len,slen,newlen,flag=1;
	j=k=0;
	char sentence[100],newsentence[100];
	char sarray[10][10];
	printf("\nEnter the sentence:");
	fgets(sentence,sizeof sentence,stdin);
	len=strlen(sentence);
	/*for(i=0;i<=len;i++)
	{
		if(sentence[i]==' '||sentence[i]=='\0')
			{
			sarray[j][k]='\0';
			j++;
			k=0;
			}
		else
			sarray[j][k++]=sentence[i];
	}
	slen=j-1;*/
	for(i=0,j=0;i<=len;i++)
	{
		if(sentence[i]!=' ')
			newsentence[j++]=sentence[i];
	}
	newlen=j-1;
	for(i=0,j=newlen;i<j;i++,j--)
	{
		if(newsentence[i]!=newsentence[j])
			{flag=0;
			break;}
	}
	if(flag)
		printf("\nIt is a palindrome");
	else
		printf("\nNot a palindrome");		
	return 0;
}
