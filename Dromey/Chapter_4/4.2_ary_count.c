/* Dromey 4.2 - Array counuting 
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
    
	printf ("Enter the number of Students: ");
	scanf ("%d", &n);
	printf ("Enter the students mark :\n");
    
	for( i = 0; i < n; ++i ) {
		scanf("%d", &a[i]);
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
    
	getchar();
	
	return 0;
}

