/*Find square root
by Sekar Che */

#include <stdio.h>

float sqrt (float g1, float n)
{     
    return (g1 + (n / g1)) /2;
}

int main()
{
    float n;
    float g1;
    int i;
    
    printf ("Enter the number to find square root:\n ");
    scanf ("%f", &n);
    
    g1 = n / 2;
    
    for (i = 1 ; i < n *100 ; ++i) {
    	g1= sqrt(g1,n);
    }      
    
    printf ("The sqrt is : %f", g1);
    
    return 0;
}
