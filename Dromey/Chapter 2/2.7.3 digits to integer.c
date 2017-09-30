/* digits to integer
by sekar che*/



#include <stdio.h>

int main()
{	
	int n;
	int a[100];
	int i;
	int d = 0;

	printf("Enter the number of digits(0-9):");
	scanf("%d", &n);
	printf("Enter the digits:\n");

	for(i = 0 ; i < n ; ++i) {
		scanf("%d", &a[i]);
		d = d * 10 + a[i]; 
	}	
	
	printf("%d", d);
	
	return 0;
}
