#include<stdio.h>
#include<string.h>
void main()
{
    char name1[30],name2[30];
    int i,k,j,c;
    printf("enter the string that is to be reversed\n");
    gets(name1);
    for (i=0;name1[i]!=0;i++);
        c=i;
        for(j=i,k=0;k<c+1,j>=0;j--,k++)
            {
                name2[k]=name1[j];
            }
            printf("the reversed string is\n");
    for(i=0;i<c+1;i++)
    printf("%c",name2[i]);
    printf("\nthe orignal name is %s \n", name1); 
}
