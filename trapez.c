#include<stdio.h>
void main()
{
    int i,k,m,n,p,l,s=1;
    printf("Enter the number of rows");
    scanf("%d",&n);
    p=(n*n)+1;
    l=p;
    m=n;
    for(i=1;i<=n;i++)
        {
        for(k=1;k<=n-m;k++)
        printf("-\t");
        for(k=1;k<=(2*m);k++)
            {
            if(k<=m)
            {
            printf("%d \t",s);
            s++;
            printf("*\t");
            }
            else
            {
            printf("%d \t",p);
            p++;
            if(k<(2*m))
            printf("*\t");
            }
            }
            printf("\n");
            m=m-1;
            l=l-m;
            p=l;
        }
}    
