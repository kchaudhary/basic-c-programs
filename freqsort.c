#include<stdio.h>
void main()
{
    int i,org[20],new[20],fre[10],cat[9],max,count,x,y;
    for(i=0;i<10;i++)
        {
            fre[i]=0;
        }
    printf("enter the values in the array\n");
    for(i=0;i<9;i++)
        scanf("%d",&org[i]);    
    for(i=0;i<9;i++)
        {
        fre[org[i]]=fre[org[i]]+1;
        }
    for(i=0;i<9;i++)
        {
            printf("%d",fre[i]);
        }
        printf("\n");
        count=0;
        max=1;
        x=0;
        y=1;
    while(y!=0)
    {
        for(i=0;i<9;i++)
            {
            if(max<fre[i])
            {
            max=fre[i];
            count=i;
            }
            }
        y=max;
        fre[count]=0;
        for(i=x;i<=(x+y);i++)
            {
            new[i]=count;
            max--;
            if(max==0)
            break;
            }
       x=x+y;
    }
    printf("\n");
    for(i=0;i<9;i++)
        {
        printf("%d \t",new[i]);
        }
}
