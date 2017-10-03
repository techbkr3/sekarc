/* Dromey - 4.5 Partitioning of array
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
	int x;
    
	printf("Enter the number of values:");
	scanf("%d", &n);

	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
	printf("Enter the partition value:");
	scanf("%d", &x);
	
	for(i = 0; i < n; ++i){
		for(j = 0; j < n - i -1; ++j){
			if(a[j] > a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	
	printf("ordered array is: \n");
	for(i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	
	i = 0;
	while(x > a[i]) {
		++i;
	}
	printf("\nPartition index: %d", i);
  	
	getchar();
    
	return 0;
}

