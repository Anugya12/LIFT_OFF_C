#include<stdio.h>
void swap(int *a,int *b);
void main()
{
    int a,b;
    printf("enter the numbers to be swaped :");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("numbers after swaping: %d %d",*a,*b);
}