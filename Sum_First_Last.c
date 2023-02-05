// C program to find sum of first and last digits in a number.
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a=(n%10);
    
    while(n>10)
    {
        n/=10;
    }

    printf("%d",a+(n));

    return 0;
}