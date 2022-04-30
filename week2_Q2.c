#include<stdio.h>
void main() 
{ 
	int n[10],so=0,se=0,i,j; 
    printf( "Enter 10 integers : " );   
	for( i=0; i<10; i++ ) 
    { 
		scanf( "%d", &n[i] );
    }
    for( j=0; j<10; j++ ) 
    {
		if( n[j]%2 == 0 ) 
		     se= se +n[j]; 
		else 
		     so= so +n[j];  
	} 
	printf( "Sum of all odd numbers is : %d\n",so); 
	printf( "Sum of all even numbers is : %d\n",se); 

} 