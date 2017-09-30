/* Avg of numbers
	By Sekar Che */
	
#include <stdio.h>

int main()
{
        int n;
        int a[100];
        int sum = 0;
        int i;

        printf("Total : ");
        scanf("%d", &n);
        printf("Enter the set of numbers:");
        

        for(i = 0 ; i < n ; ++i) {
                scanf("%d", &a[i]);
                sum += a[i];
        }

        printf("avg of number : %d", sum/n);

        return 0;
}
