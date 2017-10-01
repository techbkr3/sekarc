/* Dromey 3.6 - Generate pseudo Randam number
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */ 

#include <stdio.h>

int main()
{
	int a;
	int b;
	int m = 4096;
    int i;
    int x[5000];
    int count = 0;
    
	for(i = 0; i < m; ++i) {
		x[i] = i + 1;
	}
    
	for(i = 0; 0 <= x[i] <= m - 1 && count <= 4096; ++i && ++count) {
		b = 853;
		a = 109;
		x[i + 1] = (a * x[i] + b) % m;
	} 
    
	for(i = 0; i < m; ++i) {
		printf("%d ", x[i]);
	}
    
    getchar();
    
    return 0;
}




