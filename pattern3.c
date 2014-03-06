#include<stdio.h>
void main()
{ 
  int i,j,p,num,m=0,k=1;
  printf("enter the number upto which you want the pattern printed\n ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
    {
               
        for(j=num;j>=i;j--)
            printf(" ");
        for(j=i;j<=i+m;j++)
            {
            k=i;
            m=m+2;
            printf("%d",j);
            if(j==((k*2)-1))
            break;
            }
         if(j!=1)
         {
        for(p=j-1;p>=i;p--)
            printf("%d",p);
         }
        printf("\n");
  }
}
