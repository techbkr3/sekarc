/*Exchanging i and a[i]
	by Sekar Che */


#include <stdio.h>

int main(void)
{
	int i = 5;
    int a[] = {1,2,3};
    int t;

	printf ("Before exchange:\ni = %i\na[i] = %i \n", i, a[i]);
  	
    t = i;
    i = a[i];
    a[i] = t;
    

    printf ("After Exchange:\ni = %i\na[i] = %i ", i, a[i]);

    return 0;
}
