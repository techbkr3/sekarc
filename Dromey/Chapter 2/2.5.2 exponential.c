/* Find Exponential 
By sekar che */

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
	float sum = 0;

	printf("Enter the lenth of : ");
	scanf("%d", &n);

	for(i = 0 ; i <= n ; ++i) {
		sum += (1 / fact(i));		
	} 

	printf("%f" ,sum);

	return 0;
}
