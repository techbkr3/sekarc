/* Exchanging three values with temp variable
	Sekar Che*/

#include <stdio.h>

int main()
{
	int a = 1;
    int b = 2;
    int c = 3;
    int t;

	printf ("Before exchanging\n A : %d \n B : %d\n C : %d\n", a, b, c);
	
    t = b;
	b = a;
	a = c;
    c = t;
    

    printf ("After Exchanging\n A : %d \n B : %d\n C : %d \n", a, b, c);
	
	return 0;
}
