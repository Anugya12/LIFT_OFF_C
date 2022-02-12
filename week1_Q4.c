#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
 printf("enter 1 for addition,2 for subtraction,3 for multiplication,4 for division and 5 for modulus=");
 scanf("%d",&c);
 switch(c)
 {
     case 1:
     printf("Addition: %d + %d = %d",a,b,a+b);
     break;
     case 2: 
     printf("Subtraction: %d - %d = %d",a,b,a-b);
     break;
      case 3:
       printf("Multiplication: %d * %d = %d",a,b,a*b);
     break;
      case 4:
       printf("Division: %d / %d = %d",a,b,a/b);
     break;
      case 5:
       printf("Modulus: %d % (%d) = %d",a,b,a%b);
     break;
     default:
      printf("invalid input");
}
}
