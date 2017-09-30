/*Greaest Common Divisor
by sekar Che */


#include <stdio.h>

int main()
{
    int n;
    int m;
    int t;
    
    printf ("Enter the two numbers :");
    scanf ("%d %d", &n, &m);
    
    if (n < m) {
    	t = n;
        n = m;
        m = t;
    }
    while (m != 0){
        t = n % m;
        n = m;
        m = t;
    } 
    
    printf ("GCD is = %d", n);
    
    getch ();
    
    return 0;
}
