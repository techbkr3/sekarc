/*Find Smallest disisor of an integer
By sekar Che */


#include <stdio.h>

int main()
{
    int n;
    int d;
    int r;
    
    printf ("Enter the Number ");
    scanf ("%d", &n);
    
    if (n % 2 == 0) {
         printf ("Smallest Divisor = 2");
    } 
	else{
    	r = sqrt(n);
        d = 3;
        while (d <= r) {
        	if (n % d != 0) {
            	d +=2;
            } else{
            	printf ("Smallest Divisor = %d", d);
            	return 0;
            }
         }
    }   
	return 0;
}
