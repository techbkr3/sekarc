/* Find the number has max divisior 0 to 100
by sekar che */

#include <stdio.h>

int main()
{
	int i;
	int j;
	int count[100];
   
	for ( i=1; i<=100; i++) 
		for (j=1; j<=100/i; j++) 
			count[i*j]++;
	
	int max=1;
	int p;
	
	for (i=1; i<=100; i++) 
		if (count[i] >= max) {
   			max = count[i];
   			p = i;
   			printf ("%d",p);
		}
	printf ("%d has %d divisors\n", p, max);
	
	getch ();
    return 0;
}
