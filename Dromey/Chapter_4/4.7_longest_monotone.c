/* Dromey - 4.7 Longest monotone subsequence
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171005
 */


#include <stdio.h>

int main()
{
	int n;
	int a[100];
	int i;
	int j;
	int maxj;
	int pmax;
	int crr;
	int max;
	int len[100];
    
	printf("Enter the number of value :");
	scanf("%d", &n);
	
	printf("Enter the values :");
	
	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
	
	len[0] = 0;
	pmax = 0;
	max = 0;
	
	for(i = 1; i < n; ++i) {
		crr = a[i];
		if(crr < a[pmax]) {
			maxj = 0;
			for(j = 0; j < i - 1; ++j) {
				if(a[j] = crr) 
					if(maxj < len[j])
						maxj = len[j];
			}
			len[i] = maxj + 1;
			if(len[i] > max) {
				max = max + 1;
				pmax = i;
			}
		}
		else {
			max = max + 1;
			len[i] = max;
			pmax = i;
		}
	}
	
	printf("The Monotone sequence lengths:\n");
	
	for(i = 0; i < n; ++i) {
    	printf("%d", len[i]);
	}
	
		
	getchar();
	
	return 0;
}


