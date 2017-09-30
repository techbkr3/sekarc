/* Find x pow n values
by sekar che */


#include <stdio.h>

int main ()
{
	int n;
    int p = 1;
	int pseq;
    int x;

    printf ( "Enter the x :" );
    scanf ("%i", &x);
    
    printf ("Enter the n:");
    scanf ("%i", &n);
	
	pseq = x;

    while ( n > 0) {
    	if ((n % 2) == 1) {
        	p *= pseq;
        }
        n = n / 2;
        pseq *= pseq;
    }
	
	printf ("%i", p);
	
	getch ();
	return 0;
}
