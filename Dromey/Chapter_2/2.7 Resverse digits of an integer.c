/* Reversing digits of an integer
by Sekar Che */

#include <stdio.h>

int main()
{
	int n;
	int i;
	int r;
	int d = 0;

	printf("Enter the Integer : ");
	scanf("%d", &n);

	while(n != 0) {
		r = n % 10;
		d = d * 10 + r;
		n = n / 10;					
	}	
	
	printf("everse digits of an integer : %d", d);

	return 0;
}
