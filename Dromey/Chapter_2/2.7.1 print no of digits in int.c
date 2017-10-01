/* Print number of digits in an integer
by sekar Che */


#include <stdio.h>

int main()
{
	int n;
	int count = 0;

	printf("Enter an Integer : ");
	scanf("%d", &n);

	while(n != 0) {
		n = n / 10;
		++count;	
	}
	
	printf("Number digits integer : %d", count);

	return 0;
}
