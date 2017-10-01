/* Exchanging two values with temp variables 
	by Sekar Che*/

#include <stdio.h>

int main()
{
	int a = 3;
	int b = 6;
	int t;

	printf ("Before exchanging\n A : %d \n B : %d\n", a, b);
	
    t = a;
	a = b;
    b = t;

    printf ("After Exchanging\n A : %d \n B : %d", a, b);
	
	return 0;
}
