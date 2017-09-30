/*Prime Factor of an Integer
by sekar che */
 

#include <stdio.h>

int main()
{
	int n;
	int sum;
	int i;
	int c;
	
	
	printf (" Enter the limits to find perfect numbers : ");
	scanf ("%i", &n );
	
	for (i = 1; i <= n; ++i){
		c = 1;
		sum = 0;
		
		while ( c < i ){
			if ( i % c == 0)
				sum = sum + c;
				++c;
		}
		
		if ( sum == i) {
			printf ("%d " , i);
		}
		
	}
	
	
	return 0;
}




