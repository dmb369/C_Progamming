#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int n,s;
	    scanf("%d %d",&n, &s);
	    if (n<s) printf("%d\n",n+n-s);
	    else printf("%d\n",s);
	    q--;
	}
	return 0;
}

