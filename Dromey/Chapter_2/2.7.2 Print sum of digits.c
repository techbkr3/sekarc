/*Print sum of digits in an integer
by Sekar Che */

#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int r;

	printf("Enter an integer : ");
	scanf("%d", &n);

	while(n != 0) {
		r = n % 10;
		sum += r;
		n = n / 10;	
	}
	
	printf("\n Sum of digits : %d", sum);

	return 0;
}
