#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,n,i;
    printf("Enter the no. of terms :");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}