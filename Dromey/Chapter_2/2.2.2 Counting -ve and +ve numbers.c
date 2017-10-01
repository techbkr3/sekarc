/*Counting the -ve and +ve numbers
	By Sekar Che*/
	

#include <stdio.h>

int main(void)
{
    int a[5];
    int count = 0;
    int count1 = 0;
    int i;
    int n = 5;

    printf("Enter the 5 values \n");

    for(i = 0; i < n; ++i)
    {
    	scanf("%i", &a[i]);
    }

    for( i = 0; i < n; ++i)
    {
        if(a[i] >= 0)
        {
            count += 1;
        }
        else
        {
        	count1 +=1;
		}
    }

    printf("Number of positve numbers: %i\n", count);
    printf("Number of Negetive numbers: %i", count1);

    return 0;
}
