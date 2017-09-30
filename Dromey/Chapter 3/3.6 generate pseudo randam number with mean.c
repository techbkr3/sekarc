/* Generate pseudo Randam number and calculate mean value
By sekar Che */


#include <stdio.h>

int main()
{
    int a;
    int b;
    int m = 4096;
    int i;
    int x[5000];
    int count = 0;
    int sum = 0;
    
    for (i = 0; i < m; ++i) {
    	x[i] = i + 1;
    }
    
	for (i = 0; 0 <= x[i] <= m - 1 && count <= 4096; ++i && ++count) {
    	b = 853;
    	a = 109;
    	x[i + 1] = (a * x[i] + b) % m;
    	sum += x[i + 1];
    } 
    
    for (i = 0; i < m; ++i) {
    	printf ("%d ", x[i]);
    }
    
	sum = sum / 4096;
    
    printf ("\n Mean value is: %d", sum);
    
    getch ();
    
    return 0;
}




