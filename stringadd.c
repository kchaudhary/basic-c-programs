#include<stdio.h>
#include<string.h>
void main()
{
int l1,l2,l3,i;
char ch1[10],ch2[10],ch3[20];
printf("Enter the first string\n");
    gets(ch1);
printf("enter the second string");
    gets(ch2);
l1=strlen(ch1);
l2=strlen(ch2);
l3=l1+l2;
for(i=0;i<l1;i++)
    ch3[i]=ch1[i];
for(i=l1;i<l3;i++)
    ch3[i]=ch2[i-l1];
    puts(ch3);
printf("\n so here it is%d",l1);
}
