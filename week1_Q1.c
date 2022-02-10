#include<stdio.h>
void main()
{
  
    int r;
    char n[20],br[20],h[100];
    system("cls");
     printf("\nEnter name=");
     gets(n);
    printf("\nEnter branch=");
     gets(br);
     printf("\nEnter hobbies=");
     gets(h);
      printf("\nEnter Regd. no.=");
    scanf("%d",&r);
      printf("\nName=");
      puts(n);
      printf("\nRegd. no.=%d",r);
  printf("\nbranch=");
     puts(br);
     printf("\nhobbies=");
     puts(h);
   getch(); 
}