/*Prime Factor of an Integer
by sekar che */
 

#include <stdio.h>

int main()
{
	int n;
	int i = 2;
	
	printf (" Enter the number to find prime factor : ");
	scanf ("%i", &n );
	
	while ( n != 0 )
	{
		if ( n % i != 0 ){
			i = i + 1;
		}
		else {
			n = n / i;
			printf ( " %i ", i);
			if ( n == 1)
			break;
		}
	}
	
	return 0;
}




