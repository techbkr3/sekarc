/* Dromey 3.3.1 - Find GCD of intergers without while loop
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */
 
 
#include <stdio.h>

int main()
{
	int n;
	int m;
	int t;
	int i;
    
	printf ("Enter the numbers to find GCD\n");
	scanf ("%d %d", &n, &m);
    
	if(m > n) {
    	t = n;
    	n = m;
        m = t;
	}
    
	for(i = m ; i <= n ; --i) {
		t = n % m;
		n = m;
		m = t;
	}
	printf ("GCD is = %d", n);   

    
    getchar();
    
    return 0;
}


