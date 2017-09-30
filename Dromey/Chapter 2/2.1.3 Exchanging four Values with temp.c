/* Exchanging four values with temp variable
	Sekar Che*/

#include <stdio.h>

int main()
{
	int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int t;

	printf ("Before exchanging\n A : %d \n B : %d\n C : %d\n D : %d\n", a, b, c, d);
	
    t = d;
	d = a;
	a = b;
    b = c;
    c = t;

    printf ("After Exchanging\n A : %d \n B : %d\n C : %d \n D : %d", a, b, c, d);
	
	return 0;
}
