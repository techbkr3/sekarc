/* sum of factorials
By sekar Che */


#include <stdio.h>

float fact(int n)
{
    if(n == 0) {
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
	int sum = 0;
	int i;

	printf("Enter the length: ");
	scanf("%d", &n);

	for (i = 0 ; i <= n ; ++i) {
		sum += fact(i);
	}	

	printf("sum of factorial series: %d", sum);

	return 0;
}
