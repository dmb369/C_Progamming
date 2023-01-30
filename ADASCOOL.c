#include <stdio.h>

int main(void) {
    int q;
    scanf("%d",&q);
    while(q>0)
    {
        int a,b;
        scanf("%d %d", &a ,&b);
        if ((a%2!=0) && (b%2!=0)) printf("NO\n");
        else printf("YES\n");
        q--;
    }
	return 0;
}

