/* Base conversion 
By sekar Che */

#include <stdio.h>
  
int main ()
{
	const char basedigits[16] = { '0', '1', '2', '3', '4', '5','6', '7', '8', '9', 'A', 'B','C', 'D', 'E', 'F'};
    long int x;
    int y[64];
    int i = 0;
    int b;
    int n;
    
    printf("Enter the number to be convert: ");
    scanf("%ld", &x);
    
    printf ( " Enter the base : ");
    scanf ( "%i", &b);
    
    do
    {
    	y[i] = x % b;
    	++i;
    	x = x / b;
    }
    while ( x != 0 );
    
    printf ( " The converted number is = ");
    
    for ( --i; i >= 0; --i ) {
    	n = y[i];
    	printf ( "%c", basedigits[n]);
    }
    
    return 0;
  }
