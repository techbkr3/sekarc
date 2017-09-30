/* Find square root
by sekar che */



#include<stdio.h>

float abs (float x)
	{	
	if (x < 0)
	x = -x;
	return(x);
}

float squareRoot(float x)
{
	float e= 0.00001;
	
	float g1=1;
	
	while(abs ( g1 * g1 - x ) >= e)
		g1 = ( x / g1 + g1 ) / 2;
		
	return g1;
}

int main()
{
	
	int n;
	int a[100];
	float m = 1;
	int i;
	
	printf ("Enter the count of number:");
	scanf ("%d", &n );
	
	
	printf ("Enter the Numbers to find geometric mean:\n");
	
	for ( i = 0 ; i < n ; ++i) {
        scanf ("%d", &a[i]);
        m *= a[i];
    }
    printf("%f", m);
    
	
	printf (" %f\n",squareRoot(m));
	
	return(0);
}
