#include<stdio.h>
#include<conio.h>
void main()
{
    float r,d,c,a;
    system("cls");
    printf("enter radius of circle=");
    scanf("%f",&r);
    d= 2*r;
    c= 2*3.14*r;
    a= 3.14*r*r;
    printf("diameter of circle=%f",d);
    printf("circumference of circle=%f",c);
 printf("area of circle=%f",a);
 getch();
}