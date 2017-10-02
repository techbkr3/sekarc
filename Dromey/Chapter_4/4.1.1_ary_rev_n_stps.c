/* Dromey 4.1.1 Array Reversal continues n steps
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
    
	printf("Enter number of values:");
	scanf("%d", &n);
    
	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	} 
    
	printf("Enter the numbers :");
	
	for(i = 0; i < n; ++i) {
		temp = a[i];
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


