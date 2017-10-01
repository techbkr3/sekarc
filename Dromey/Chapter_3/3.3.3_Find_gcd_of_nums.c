/* Dromey 3.3.3 - Find GCD of intergers
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */

#include <stdio.h>

int main()
{
	int n;
	int a[100];
	int i;
	int j;
	int min = 10;
	int count = 0;
    
	printf ("How many numbers to enter:\n");
	scanf ("%d", &n);
    
	printf ("Enter the numbers to find GCD\n");
    
	for(i = 0 ; i < n ; ++i) {
		scanf ("%d", &a[i]);
		if (min > a[i]) {
			min= a[i];
		}
	}
    
	for(i = min ; i > 0 ; --i) {
		for(j = 0 ; j < n ; ++j) {
			if(a[j] % i != 0) {
				count = 1;  
			}
		}
		if(count != 1) {
			printf ("GCD : %d", i);
			break;
		}
		count = 0;
	}
    
	getchar();
	
	return 0;
}



