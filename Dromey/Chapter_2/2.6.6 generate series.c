/* Generate f(3+i)= (1+b)!+(0+a)! series
By sekar Che */
 

#include <stdio.h>

int fact(int n)
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
	int i;
	int a = 0;
	int b = 1;

	printf("Enter the length of series : ");
	scanf("%d", &n);

	for(i = 1 ; i <= n ; ++i) {
		printf("F%d = %d\n", 2+i, fact(b) + fact(a));
		++a;
		++b;
	}	

	return 0;
}
