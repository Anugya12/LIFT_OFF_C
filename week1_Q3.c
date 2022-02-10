#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    system("cls");
    printf("enter a number=");
    scanf("%d",&a);
    switch(a%2)
    {
        case 0:printf("%d is even number",a);
        break;
        case 1:printf("%d is odd number",a);
        break;
        default: printf("invalid input");
    }
getch();
}