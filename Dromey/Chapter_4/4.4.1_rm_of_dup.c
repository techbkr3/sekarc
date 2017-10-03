/* Dromey - 4.4.1 Removal of dupilcates with delete
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171003
 */

#include <stdio.h>

int main()
{
	int n;
	int a[100];
	int i;
	int j;
	int t;
    
	printf("Enter the number of values:");
	scanf("%d", &n);

	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; ++i){
		for(j = i + 1; j < n; ++j){
			if(a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	
	printf("ordered array is: \n");
	for(i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
  	
	for(i = 0; i < n; ) {
		if(a[i] == a[i + 1]) {
			for(j = i; j < n; ++j) {
				a[j] = a[j + 2];
			}
			--n;
		} else {
			++i;
		}
	}
    
	printf("\nAfter removal of dupicate: \n");
	for(i = 0; i < n-1; ++i) {
		if(a[i] > 0)
			printf("%d ", a[i]);
	}
    
	getchar();
    
	return 0;
}

