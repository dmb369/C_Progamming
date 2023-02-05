// C program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[50],count=0;
    
    while(n>0)
    {
        int b=n%10;
        n=n/10;
        a[count]=b;
        count++;
    }

    for (int i=0; i<count; i++)
    {
        if ((i>0) && (i<count-1)) printf("%d",a[count-i-1]);
        else printf("%d",a[i]);
    }

    return 0;
}