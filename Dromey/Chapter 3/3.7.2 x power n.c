/* X power n
by sekar che */


#include <stdio.h>

int pow (int x, int n)
{
    int a;
    a = x;
    
    if (n == 0) {
		return 1;
    } else {
    	while (n - 1 != 0) {
        	x *= a;
        	--n;
        } 
        return x;
    }
}

int main()
{
    int n;
    int x;
    
    printf ("Enter the x and n : ");
    scanf ("%d \n %d", &x, &n);
    
    printf ( "X power n : %d", pow (x,n));
    
    getch ();
    return 0;
}



