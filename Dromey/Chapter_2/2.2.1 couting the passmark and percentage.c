/*Counting the passmark and Percentage
 by Sekar */
 

#include <stdio.h>

int main(void)
{
    int a[5];
    int count = 0;
    int i;
    int n = 5;
    int percentage;
    int total = 0;

    printf("Enter the 5 marks  values(1 - 100)\n");

    for(i = 0; i < n; ++i)
    {
		scanf("%i", &a[i]);
    }
    

    for( i = 0; i < n; ++i)
    {
        if(a[i] >= 50)
        {
            total += a[i];
            count += 1;
        }
    }
    printf(" Total number of pass students marks:=%i \n",total);

    printf("Number of pass students:=%i \n", count);

    percentage = (count * 100) / n;
    printf("Pass Percentage:%i",percentage);

    return 0;
}
