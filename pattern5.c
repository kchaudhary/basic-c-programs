#include<stdio.h>
void main()
{
int i,j,k=0,num,a[20],l;
printf("enter the no. of rows you wanted");
scanf("%d",&num);
for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
        if(i%2!=0)
            {
                k=k+1;
                printf("%d\t",k);
            }
        else
            {
            k=k+1;
            if(j==i)
            {
                for(l=k;l>=a[i]+1;l--)
                printf("%d\t",l);
            }
            }
            a[i+1]=k;
        }
        printf("\n");
    }
}
