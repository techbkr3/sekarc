/* find fibonacci sequence or not
	by seakr che */
	
#include <stdio.h>

int main()
{
	int n;
	int i;
	int a = 0;
	int b = 1;
	int c;
	int d;
	int e;	
	
	printf("Enter the sequence :");
	
	printf("d : ");
	scanf("%d", &d);
	
	printf("e : ");
	scanf("%d", &e);	
	

	if(d == 0 && e == 1) {
		printf("This is fibonacci sequence\n");			
	} 
	else {
		do {
			c = a + b;
			if(c == e) {
				if(b == d) {
					printf("this is fibonacci sequence\n");			
					return 0;
				}		
			}
			a = b;		
			b = c;

		} while(e >= c);
	
	printf("It is not fibonacci series\n");
	
	}
		
	return 0;
}
