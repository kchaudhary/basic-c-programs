#include<stdio.h>
void bubble_sort(int [],int);
void main()
{
    int a[30],n,i;
     printf("nEnter no of elements :");
     scanf("%d",&n);
     printf("nEnter array elements :");
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
     bubble_sort(a,n);
}
//--------------------------------- Function 
void bubble_sort(int a[],int n)
{
int i,j,k,temp;
   printf("nUnsorted Data:");
    for(k=0;k<n;k++)
         printf("%5d",a[k]);
    for(i=1;i< n;i++)
    {
         for(j=0;j< n-1;j++)
         if(a[j]>a[j+1])
               {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               }
    printf("nAfter pass %d : ",i);
        for(k=0;k< n;k++)
             printf("%5d",a[k]);
    }
}
