/* Dromey 3.3 - Find Greaest Common Divisor
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
    
	printf ("Enter the two numbers :");
	scanf ("%d %d", &n, &m);
    
	if(n < m) {
		t = n;
		n = m;
		m = t;
	}
	while(m != 0){
		t = n % m;
		n = m;
		m = t;
	} 
    
	printf ("GCD is = %d", n);
    
	getchar();
    
	return 0;
}



