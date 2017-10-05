/* Dromey - 5.1 Array Merge
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171005
 */


#include <stdio.h>

void merge(int a[], int b[], int n, int m, int c[])
{
	int i = 0;
	int j = 0;
	int k = 0;
    
	while(i < n && j < m) { 
		if(a[i] <= b[j]) {
    		c[k] = a[i];
			++k;
			++i;
		} else {
			c[k] = b[j];
			++k;
			++j;
		}
	}
    
	while(i == n && j < m) {
		c[k] = b[j];
		++k;
		++j;
	}
	while(i < n && j == m) {
		c[k] = a[i];
		++k;
		++i;
	}
}

int main()
{
	int a[100];
	int b[100];
	int n;
	int m;
	int c[100];
	int i;
	int j;
	int temp;
    
	printf("Enter the n Value:");
	scanf("%d", &n);
	
	printf("Enter the Values:");
	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
    
	printf("Enter the m value:");
	scanf("%d", &m);
	
	printf("Enter the Values:");
	for(i = 0; i < m; ++i) {
		scanf("%d", &b[i]);
	}
    
	for(i = 0; i < n; ++i) {
		for(j = 0; j < n - i - 1; ++j) {
			if(a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
    
    
	for(i = 0; i < m; ++i) {
		for(j = 0; j < m - i - 1; ++j) {
			if(b[j] > b[j + 1]) {
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
    
	merge(a, b, n, m, c);
    
	printf("Sorted array : ");
	
	for(i = 0; i < n + m; ++i) {
		printf("%d ", c[i]);
	}
    
	getchar();
    
	return 0;
}
