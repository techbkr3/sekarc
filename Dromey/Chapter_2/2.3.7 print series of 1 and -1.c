/* Print series like 1 -1 1 -1
	By Sekar Che */
	
#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("Enter the lenth of series : ");
    scanf("%d", &n);

    for (i = 0 ; i < n ; ++i) {
        if((i % 2) == 0) {
            printf("1 ");
        }
		else {
            printf("-1 ");
        }
        }

        return 0;
}
