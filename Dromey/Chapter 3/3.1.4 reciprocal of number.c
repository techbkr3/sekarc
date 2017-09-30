/* Reciprocal of a number
By sekar */


#include <stdio.h>

int main()
{
	float n;
    
    printf ("Enter the Number ");
    scanf ("%f", &n);
    
    if (n == 0) {
       printf ("Not Defined");
    } 
	else {
       printf ("REciprocal of number : %f", 1/n);
    }

    return 0;
}
