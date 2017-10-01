/* Dromey 3.8 - Find nth fibonacci number
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */ 

#include <stdio.h>

int fib(int n)
{
    if(n == 0) {
    	return 0;
	} else if(n == 1) {
    	return 1;
	} else {
    	n = fib (n - 1) + fib(n - 2);
    	return n;
	}
}

int main()
{
	int n;
	int i;
	int a[1000];
    
	printf ("Enter to find n th fibonacci number : ");
	scanf ("%d", &n);
    
	for(i = 0; i < n; ++i) {
		a[i] = fib (i);
    }
    
	printf ("%d", a[n-1]);
    
	getchar();
    
	return 0;
}



