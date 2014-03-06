#include<stdio.h>
void main()
{
int org[20][20],tran[20][20],final[20][20],num,m,n,i,j,k,sum;
printf("enter the initial number");
scanf("%d",&num);
printf("enter the number of rows and columns");
scanf("%d",&m);
scanf("%d",&n);
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        org[i][j]=num;
        num++;
        }
    }
printf("the matrix is\n");
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        printf("%d\t",org[i][j]);
        }
        printf("\n");
    }
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        tran[i][j]=org[j][i];
        }
    }
printf("the transpose matrix is\n");
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        printf("%d\t",tran[i][j]);
        }
        printf("\n");
    }
printf("the matrix is\n");
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        for(k=0;k<m;k++)
            {
            sum=sum + org[i][k]*tran[k][j];
            }
            final[i][j]=sum;
            sum=0;
        }
    }
printf("the final matrix is\n");
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        printf("%d\t",final[i][j]);
        }
        printf("\n");
    }
}
