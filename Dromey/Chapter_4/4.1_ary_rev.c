/* Dromey 4.1 - Array Reversal
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */ 

#include <stdio.h>

int main()
{
	int n;
	int a[50];
	int i;
	int t;
    
	printf("Enter number of values: ");
	scanf("%d", &n);
    
	printf("Enter the number");
	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
    
	for(i = 0; i < n/2; ++i) {
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
    
	printf("Array Reversal : \n");
	for(i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
    
	getchar();
    
	return 0;
	
}


