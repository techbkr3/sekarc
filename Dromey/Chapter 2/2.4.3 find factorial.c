/* Find Factorial number or not?
BY Sekar Che*/

#include <stdio.h>

int fact(int n)
{
	if(n == 0) {
        return 1;
    } else if(n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    int i = 0;

    printf("Num if fact : ");
    scanf("%d", &n);

    while(n >= fact(i)) {
        if(n == fact(i)) {
            printf("This Factorial Number");
            return 0;
        }
        ++i;
    }

    printf("This is Not a factorial Number");

	return 0;
}
