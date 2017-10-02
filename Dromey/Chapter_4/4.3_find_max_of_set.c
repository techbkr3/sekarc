/* Dromey - 4.3 Find Max of a set
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171002
 */
	

#include <stdio.h>

int main()
{
	int n;
	int a[100];
	int i;
	int q = 0;
    
	printf("Enter the number of values: ");
	scanf("%d", &n);
    
	printf("Enter the values:\n");
	
	for(i= 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
    
	for(i = 0; i < n; ++i) {
		if(a[i] > q ) {
			q = a[i];
		}
	}
    
	printf("Max value in the set = %d", q);
    
	getchar();

	return 0;
}

