/*Lucas sequence
by sekar che*/


#include <stdio.h>

int main()
{
	int n;
	int i;
	int a = 1;
	int b = 3;
	int c;

	printf("Enter the length : ");
	scanf("%d", &n);
	printf("Lucas Seq:\n");
	
	
	printf("1 3 ");	
	
	for(i = 2 ; i < n ; ++i) {
		c = a + b;
		a = b;
		b = c;

		printf("%d " , c);
	}

	return 0;
}
