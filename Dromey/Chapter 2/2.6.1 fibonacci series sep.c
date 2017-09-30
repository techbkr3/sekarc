/* Fibonacci series out
by sekar che */


#include <stdio.h>

int main()
{

	int a;
	int b;
	int c;

	printf("Enter two consecutive fib numbers : ");
	scanf("%d %d", &a, &b);
	
		c = a + b;

		printf("Next fib number is :%d " , c);

	return 0;
}
