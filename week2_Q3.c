#include<stdio.h>
#include<math.h>
void main()
{
    

    int n,l,digits,f,s;
    printf("Enter an integer: ");
    scanf("%d",&n);
    l = n%10;
    digits = log10(n);
    f = n/pow(10,digits);
    s = l * pow(10,digits);
    s += n% (int)pow(10,digits);
    s -= l;
    s += f;
    printf("%d",s);
    
}