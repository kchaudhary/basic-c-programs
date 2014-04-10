#include<stdio.h>
void main()
{
int a[20][20],b[20][20],i,k,m,n,s,p;
printf("enter the number of rows & columns of matrix");
scanf("%d %d",&m ,&n);
printf("Enter the values of matrix\n");
p=n;
for(i=0;i<m;i++)
    {
    for(k=0;k<n;k++)
        {
        scanf("%d", &a[i][k]);
        }
    }
printf("the matrix is :- \n");
for(i=0;i<m;i++)
    {
    for(k=0;k<n;k++)
        {
        printf("%d \t",a[i][k]);
        }
        printf("\n");
    }
printf("enter the 1 to rotate matrix left and 0 to rotate right\n");
scanf("%d",&s);
if(s==1)
{
for(i=0;i<m;i++)
    {p=p-1;
    for(k=0;k<n;k++)
        {
        b[i][k]=a[k][p];
        }
    }
}
if(s==0)
{
for(i=0;i<m;i++)
    {p=n;
    for(k=0;k<n;k++)
        {p=p-1;
        b[i][k]=a[p][i];
        }
    }
}    
for(i=0;i<m;i++)
    {
    for(k=0;k<n;k++)
        {
        printf("%d \t",b[i][k]);
        }
        printf("\n");
    }

}
