/*Find nth fibonacci number
by sekar Che */


#include <stdio.h>

int fib (int n)
{
    if (n == 0) {
    	return 0;
    } else if (n == 1) {
    	return 1;
    } else {
    	return fib (n - 1) + fib(n - 2);
    }
}

int main()
{
	int n;
	int i;
	int a[1000];
    
    printf ("Enter to find n th fibonacci number : ");
    scanf ("%d", &n);
    
    for (i = 0;i < n; ++i) {
    	a[i] = fib (i);
    }
    
    printf ("%d" ,a[n-1]);
    
    getch ();
    return 0;
}



