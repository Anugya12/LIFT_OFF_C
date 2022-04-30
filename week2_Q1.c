#include<stdio.h>
#include <string.h>
void main()
{
    int l,i,j,t;
   char s1[1000],s2[1000],c[1000]; 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    strcat(s1,s2);
    l=strlen(s1);
    j=l-1;
     for (i = 0; i<l; i++)  
    {  
        c[i]=s1[j];
        j--;
    }  
	printf("concatenated string in reverse order=%s \n",c);
    
}