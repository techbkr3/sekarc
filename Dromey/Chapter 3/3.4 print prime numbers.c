/* Print the prime numbers
by sekar Che */


#include <stdio.h>

int main()
{
    int n;
    int l;
    int i;
    int j;
    
    printf ("Enter the limits: ");
    scanf ("%d", &n);
    
    for (l = 2 ; l < n ; ++l) {
    	j = 1;
        for (i = 2 ; i < l ; ++i) {
        	if (l % i == 0) {
            	j = 0;
            }
        }
    	if (j == 1)
    		printf("%d ", l);
    }
    
    getch();
    
    return 0;
}



