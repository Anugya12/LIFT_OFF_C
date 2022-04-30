#include<stdio.h>
void main()
{
    int a[2][2] = {1, 2, 3 ,4 },b[2][2] = {1, 2, 3 ,4 },i,j,s[2][2],p[2][2]; 

     //sum
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    //product
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        p[i][j]=0;
        }
    }
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                p[i][j]=p[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d", p[i][j]);
        }
        printf("\n");
    }
}   

