/*inverse Factorial of number
	Sekar Che */
	
#include <stdio.h>

float fact(int n)
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

        printf("Enter number n : ");
        scanf("%d", &n);
        printf("1 / n! is :");

        printf("%f", (1 / fact(n)));

        return 0;
}
