/* x pow n / n!
	By Sekar che */
	
#include <stdio.h>

float pow(int x, int n)
{
        if(n == 0){
            return 1;
        } else {
            return x<<(n - 1);
        }
}

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
        int x;
        int a;
        float b;

		printf("Enter x value : ");
        scanf("%d", &x);
        
        printf("Enter n value : ");
        scanf("%d", &n);

        
			
		a = pow(x, n);
		b = fact(n);
		
        printf("X pow n Div by n! is : \n%f", (a / b));

        return 0;
}


