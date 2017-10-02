/* Dromey 4.1.4 Array Exchange even odd position
	Eg {1 2 3 4 5 6 7 8} => {1 3 5 7 2 4 6 8}
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171002 
 */ 

#include <stdio.h>

int main()
{
	int n;
	int a[50];
	int i;
	int j;
	int k;
	int t[50];
    
	printf("Enter the number of values :");
	scanf("%d", &n);
    
	printf("Enter the values:\n");
	
	for( i = 0; i < n; ++i ) {
		scanf("%d", &a[i]);
	} 
    
	for(i = 0, j = 0, k = 0; i < n; ++i) {
		if(a[i] % 2 != 0) {
			t[j] = a[i];
			++j;
		}
		else {
			t[(n / 2) + k ] = a[i];
			++k;
		}
	}
    
	for(i = 0; i < n; ++i) {
		printf("%d ", t[i]);
	}
    
	getchar();
    
	return 0;
}

