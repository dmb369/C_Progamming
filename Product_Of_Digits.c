// C program to calculate the product of digits in a number.
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int b, pro=1;
    while(n>0)
    {
        b=n%10;
        n/=10;
        pro*=b;
    }
    printf("%d",pro);

    return 0;
}