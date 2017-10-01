/* Sum of set of all ,odd,even,and factorial series
	By Sekar Che */
/* Sum of Set of all, even, odd, factorial numbers
	By Sekar Che*/
		
#include <stdio.h>

void all(int n)
{
        printf("Sum of all numbers : %d\n", n * (n + 1) / 2);
}

void odd(int n)
{
        int i;
        int sum = 0;
        int j;

        for(i = 0, j = 1; i < n ; ++i, j = j + 2) {
                sum += j;
        }
        printf("Sum of odd numbers : %d\n", sum);
}

void even(int n)
{
        int i;
        int sum = 0;
        int j;

        for(i = 0, j = 2; i < n ; ++i, j = j + 2) {
                sum += j;
        }
        printf("Sum of even numbers : %d\n", sum);
}

void fac(float n)
{
        float i;
        float sum = 0;

        for(i = 1 ; i <= n ; ++i) {
                sum += 1 / i;
        }
        printf("Sum of fac of numbers : %f\n", sum);
}

int main()
{
        int n;

        printf("Enter the count of number to sum : ");
        scanf("%d", &n);

        all(n);
        odd(n);
        even(n);
        fac(n);

        return 0;
}

