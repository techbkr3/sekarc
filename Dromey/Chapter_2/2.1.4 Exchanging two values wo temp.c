/* Exchanging values without temp variable
	by Sekar Che */
	
#include <stdio.h>

int main(void)
{
	int a;
    int b;

    printf ("Enter the two values A and B:  \n");
    scanf ("%i%i", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf (" a = %i\n b = %i ", a, b);
    return 0;
}
