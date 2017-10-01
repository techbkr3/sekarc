/* Dromey 4.1.2 Array reversal using i.j
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
	int j;
	int t;
    
	printf("Enter the number of values:");
	scanf("%d", &n);
    
	printf("Enter the values:\n");
	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
    } 
    
	for(i = 0, j = n-1; i < j; ++i, --j) {
		t = a[i];
		a[i] = a[j];
		a[j] = t; 
    }
    
    printf("Array Reversal :\n");
    for(i = 0; i < n; ++i) {
		printf("%d ", a[i]);
    }
    
    getchar();
    
    return 0;
}


