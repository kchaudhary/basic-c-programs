#include<stdio.h>
void main()
{
 int num,a[80],min,i,cel=1,j,m=1;
 printf("enter the number of input");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
    {
    scanf("%d",&a[i]);
    }
    min=a[1];
 for(i=1;i<=num;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
 while(m=1)
 {
   cel=0;  
     for(i=1;i<=num;i++)
        {
           if(a[i]%min==0)
           cel++;
        }
     if(cel==num)
        {
        j==1;
        printf("the hcf is %d",min);
        break;
        }
      else
      min--;
 }
}
           
