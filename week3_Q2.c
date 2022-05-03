#include<stdio.h>
int isPrime(int n, int a);
void main()
{
    int n, prime;
    printf("Enter the no. to be checked: ");
    scanf("%d", &n);
    prime = isPrime(n, n/2);
    if(prime == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}

int isPrime(int n, int a)
{
    if(a == 1)
        return 1;   
    else if(n==0||n==1)
      return 0;
    else
    {
        if(n%a == 0)
            return 0;
        else
            isPrime(n, a-1);   
    }
    
}