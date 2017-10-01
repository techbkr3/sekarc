/* Manipulate by addition of two integer
by Sekar Che */


#include <stdio.h>

void multibyadd(int n, int m)
{
	int i;
	int sum = 0;

	for(i = 0 ; i < m ; ++i) {
		sum += n;	
	}
	printf("%d", sum);

}

int main()
{
	int n;
	int m;	
	
	printf("The  two numbers : ");
	scanf("%d %d", &n, &m);

	multibyadd(n,m);

	return 0;
}
