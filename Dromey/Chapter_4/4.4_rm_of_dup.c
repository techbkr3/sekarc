/* Dromey - 4.4 Removal of dupilcates
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
    
	printf("Total : ");
	scanf("%d", &n);
    
	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j) {
			if(a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
    	
	for(i = 0; i < n; ) {
          if(a[i] == a[i + 1]) {
                  for(j = i; j < n; ++j) {
                        a[j] = a[j + 1];
                  }
                  --n;
          } else {
                  ++i;
          }
    }
    
    for(i = 0;i < n; ++i) {
          printf("%d ", a[i]);
    }
    
    getchar();
    
    return 0;
}
