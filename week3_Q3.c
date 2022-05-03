#include<stdio.h>
void check(int n);
void main()
{
    int n;
    printf("Enter the no. to be checked: ");
    scanf("%d",&n);
    check(n);
}
void check(int n)
{
    if(n%2==0)
    printf("%d is even",n);
    else 
    printf("%d is odd",n);
}