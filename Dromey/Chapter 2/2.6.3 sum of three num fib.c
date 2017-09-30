/* Generate sum of three number fibonacci series
	by sekar che */
	

#include <stdio.h>

int main()
{
	int n;
	int i;
	int a = 0;
	int b = 1;
	int c = 1;
	int d;

	printf("Enter the length of series : \n");
	scanf("%d", &n);
	
	printf("Series is : \n 0 1 1 ");	
	
	for(i = 3 ; i < n ; ++i) {
		d = a + b + c;
		a = b;
		b = c;
		c = d;		

		printf("%d " , d);
	}

	return 0;
}
