/* Print power of 2 series
	By Sekar Che */
	
#include <stdio.h>

int pow(int n)
{
        if(n == 0) {
            return 1;
        } else {
            return 2<<(n - 1);
        }
}

int main()
{
        int n;
        int i;

        printf("Enter series lenth : ");
        scanf("%d", &n);
        printf("Power of 2 series:");

        for(i = 0 ; i < n ; ++i) {
        	printf("%d ", pow(i) );
        }

        return 0;
}
