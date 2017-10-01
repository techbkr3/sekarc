/*Print largest factorial number
by sekar Che */


#include <stdio.h>

int fact(int n)
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
    int i = 0;
    int a;

    printf("Enter the Number : ");
    scanf("%d", &n);

    while(n > (fact(i))) {
        a = fact(i);
        ++i;
    }

    printf("LArgest factorial number : %d", a);

    return 0;
}
