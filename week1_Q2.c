#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    system("cls");
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d is maximum",a);
    else
    printf("%d is maximum",b);
getch();
}