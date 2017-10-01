/*Find nCr
By Sekar Che */

#include <stdio.h>

float fact(int n)
{
	if (n == 0) {
		return 1;	
	} else if(n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);	
	}
}

int main()
{
	int n;
	int r;

	printf("Enter the Numbers (n and r): ");
	scanf("%d %d", &n, &r);
	
	printf("nCr : %f", fact(n)/(fact(r) * fact(n - r)));	

	return 0;
}
