#include<stdio.h>
int main()
{
    int n,p,y;
    printf("Give me the size of the hourglass:");
    scanf("%d",&n);
     y=n;
    for(int j=0;j<=n;j++)
    {
    
        for(int k=0;k<j;k++)
        {
            printf(" ");
        }
        for(int i=y;i>=0;i--)
        {
            printf("%d",i%10);
        }
        for(int i=1;i<=y;i++)
        {
            printf("%d",i%10);
        }
        y=y-1;
        printf("\n");
    }
    y=y+1;
    p=n;
    for(int j=1;j<=n;j++)
    {
        for(int k=2;k<=p;k++)
        {
            printf(" ");
        }
        y=y+1;
        for(int i=y;i>=0;i--)
        {
            printf("%d",i%10);
        }
        for(int i=1;i<=y;i++)
        {
            printf("%d",i%10);
        }
        p=p-1;
        printf("\n");
    } 
}