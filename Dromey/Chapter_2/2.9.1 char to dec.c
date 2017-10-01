/*Char to decimal
By Sekar Che */

#include <stdio.h>
#include <string.h>

int main()
{
    char n[100];
    int l;
    int i;
    
    printf("Enter the String : ");
    scanf("%s", n);
    
    l = strlen(n);
    
    for(i = 0 ; i < l ; ++i) {
    	printf("%d ",n[i]);
    }
    
    getch();
    return 0;
}

