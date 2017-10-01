/*Print the dec to char
by Sekar Che */

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int a[100];
    int i;
    
    printf ("Enter the Decimal count : ");
    scanf ("%d", &n);
    
    for (i = 0 ; i < n ; ++i) {
    	scanf("%d", &a[i]);
    }
    
    for (i = 0 ; i < n ; ++i) {
    	printf("%c ", a[i]);
    }
    
    getch();
    return 0;
}
