/* Octal to DEcimal
by sekar che */


#include <stdio.h>

int main()
{
	int n;
	int k;
	int oct = 0;
	int dec = 0;

	printf("Enter Octal number : ");
	scanf("%d", &n);

	while(n != 0) {
		k = n % 8;
		oct = oct * 10 + k;
		n = n / 8;			
	}	

	while(oct != 0) {
		k = oct % 10;
		dec = dec * 10 + k;
		oct = oct / 10;			
	}
	
	printf("Decimal number : %d ", dec);	

	return 0;
}
