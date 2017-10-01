/* Dromey 3.8 - find nth fibonacci number
 * BootCamp Code
 * Sekar Chenniyappan 
 * YYYYMMDD - replace with date
 */

// change all comments to be like this
#include <stdio.h>

int fib (int n) // FIX no space between function and parameter list
{
    if (n == 0) { // FIX all indentation should be 8 space tabs, type 1 TAB not 8 spaces.
    	return 0;
    } else if (n == 1) {
    	return 1;
    } else {
    	return fib (n - 1) + fib(n - 2);
    } // FIX functions should only 1 return statement, put values into a variable and return that at the end
}

int main()
{
	int n; 
	int i;
	int a[1000];
    
    printf ("Enter to find n th fibonacci number : ");
    scanf ("%d", &n);
    
    for (i = 0;i < n; ++i) { // FIX have a space after ; 
    	a[i] = fib (i);
    }
    
    printf ("%d" ,a[n-1]); // FIX no space before , put a space after ,
    
    getch (); // FIX getch() is not portable. it is specific to DOS/Windows. Using getchar() instead
    return 0; // FIX insert empty line before return 0
}



