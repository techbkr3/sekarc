/* Dromey 3.5 - Prime Factor of an Integer
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */

#include <stdio.h>

int main()
{
	int n;
	int i = 2;
	
	printf (" Enter the number to find prime factor : ");
	scanf ("%i", &n );
	
	while( n != 0 )
	{
		if( n % i != 0 ){
			i = i + 1;
		}
		else {
			n = n / i;
			printf ( " %i ", i);
			if( n == 1)
			break;
		}
	}
	
	return 0;
}






