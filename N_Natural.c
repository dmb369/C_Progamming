// C program to print n natural numbers and in reverse.

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) printf("%d ",i);
    printf("\n");
    for (int i=n; i>=1; i--) printf("%d ",i);
    return 0;
}