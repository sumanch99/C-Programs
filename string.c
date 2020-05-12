#include <stdio.h>
#define MAX 100
void strcat(char [],char []);       /*Function Prototype declaration*/
void main()
{
    char a[MAX],b[MAX];
    int i;
    printf("\nEnter a string:");
    gets(a);
    fflush(stdin);
    printf("\nEnter another string:");
    gets(b);
    strcat(a,b);          /*Function Calling*/
}

void strcat(char str[],char c[])  /*Called Function*/
{
    char target[MAX];
    int i=0,e=0,j;
    while(str[i]!='\0')
       {
           target[i]=str[i];
           i++;
       }
       for(j=i;c[e]!='0';e++)
       {
           target[j]=c[e];
           j++;
       }
    target[j]='\0';
    printf("\nOutput:");
    puts(target);
}

