/* Dromey 3.1 - Find square root of an number
 * BootCamp Code
 * Sekar Chenniyappan
 * 20171001 
 */
 
#include <stdio.h>

float squrt(float g1, float n)
{     
	g1 = (g1 + (n / g1)) /2;
	
	return g1;
}

int main()
{
    float n;
    float g1;
    int i;
    
    printf ("Enter the number to find square root:\n ");
    scanf ("%f", &n);
    
    g1 = n / 2;
    
    for(i = 1 ; i < n *100 ; ++i) {
    	g1 = squrt(g1,n);
    }      
    
    printf ("The sqrt is : %f", g1);
    
    return 0;
}


