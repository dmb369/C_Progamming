// C program to count the number of digits in a number.
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int count;
    while(n>0)
    {
        n/=10;
        count++;
    }
    printf("%d",count);
    return 0;
}