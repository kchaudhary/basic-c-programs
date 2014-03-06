#include<stdio.h>
void main()
{
  int i,j,num;
  printf("enter the number upto which you want the pattern printed\n ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
    {
        for(j=num;j>=i;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<i;j++)
            printf("*");
        printf("\n");
    }
  for(i=1;i<=num;i++)
    {
         for(j=1;j<=i;j++)
            printf(" ");
        for(j=num;j>=i;j--)
            printf("*");
        for(j=num;j>i;j--)
            printf("*");
       
        printf("\n");
    }
}
