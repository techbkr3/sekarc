/* Fibonacci series 
by sekar che */


#include <stdio.h>

int main()
{
	int n;
	int i;
	int a = 0;
	int b = 1;
	int c;

	printf("Length of series : ");
	scanf("%d", &n);
	
	printf("0 1 ");	
	
	for(i = 2 ; i < n ; ++i) {
		c = a + b;
		a = b;
		b = c;

		printf("%d " , c);
	}

	return 0;
}
