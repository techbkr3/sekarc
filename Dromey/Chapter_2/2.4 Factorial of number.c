/*Factorial of number
	Sekar Che */
	
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
        int i;

        printf("Enter the factorial number : ");
        scanf("%d", &n);

        printf("%d", fact(n));

        return 0;
}
