/*Find nth fibonacci number with iterative method
by sekar Che */


#include <stdio.h>

int fib (int n)
{
	int a = 0;
	int b = 1;
	int c;
	int i;
	int f[1000];
	
    if (n == 0) {
    	printf ("0");
    } else if (n == 1) {
    	printf ("1");
    } else {   
		f[0] = 0;
		f[1] = 1;
		 	
    	for ( i = 2; i < n; ++i) {
    		c = a + b;
    		f[i] = c;
    		a = b;
    		b = c;
    	}
    	printf ("%d", f[n-1]);
	}
}

int main()
{
	int n;
	
    printf ("Enter to find n th fibonacci number : ");
    scanf ("%d", &n);
    
    fib (n);

    getch ();
    return 0;
}



