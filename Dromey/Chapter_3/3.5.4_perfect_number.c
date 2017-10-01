/* Dromey 3.5.4 - Pefect number of an Integer
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */ 

#include <stdio.h>

int main()
{
	int n;
	int sum;
	int i;
	int c;
	
	printf (" Enter the limits to find perfect numbers : ");
	scanf ("%i", &n );
	
	for(i = 1; i <= n; ++i){
		c = 1;
		sum = 0;
		
		while( c < i ){
			if( i % c == 0)
				sum = sum + c;
				++c;
		}
		
		if( sum == i) {
			printf ("%d " , i);
		}
		
	}
	
	return 0;
}




