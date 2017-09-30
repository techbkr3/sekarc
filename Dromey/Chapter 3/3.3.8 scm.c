/* Smallest common divisor
by Sekar che */


#include <stdio.h>

int main()
{
    int n;
    int p;
    int t;
    int i;
    
    printf ("The two numbers :");
    scanf ("%d %d", &n, &p);
    
    if (n < p) {
        t = n;
        n = p;
        p = t;
    }
    
    for (i = 2 ; i <= p ; ++i) {
        if ((n % i == 0) && (p % i == 0)) {
            printf ("%d ", i);
            break;
          }
    }
    
    getch();
    return 0;
}
