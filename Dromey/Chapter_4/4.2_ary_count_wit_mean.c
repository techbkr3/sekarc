/* Dromey 4.2.3 - Array counuting with mean and median
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
	int count[100];
	int j;
	int m = 0;
	int sum = 0;
    
	printf ("Enter the number of Students: ");
	scanf ("%d", &n);
	printf ("Enter the students mark :\n");
    
	for( i = 0; i < n; ++i ) {
		scanf ("%d", &a[i]);
		sum += a[i];
	} 
    
	for( i = 0; i < 100; ++i ) {
		count[i] = 0;
    }
    
	for( i = 0; i < n; ++i ) {
		for( j = 0; j < 100; ++j ) {
			if( a[i] == j ) {
				++count[j];
				break;
			}
		}  
	}
    
	for( i = 0; i < 100; ++i ) {
		if( count[i] != 0 ) {
			printf ("\nCount for %d mark = %d\n", i, count[i]);
		}
	}
	
	printf ("Mean is : %d", sum / n);
	
	if( n % 2 == 0 ) {
		n = n / 2;
		printf ("Median is : %d\n", a[n]);
	}
	else {
		n = ( n / 2 ) + 1;
		printf ("Mean is : %d", a[n]);
	}
    
	getchar();
	
	return 0;
}

