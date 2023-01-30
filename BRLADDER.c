#include <stdio.h>

int main(void) {
	 int q;
    scanf("%d", &q);
    for (int i=1; i<=q; i++)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        if ((((a%2)==1) && (b==a+1)) || (((b%2)==1) && (a==b+1))) printf("YES\n");
        else if ((b==a+2) || (a==b+2)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}