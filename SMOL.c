#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int n,k;
	    scanf("%d %d",&n, &k);
	    if (k==0) printf("%d\n",n);
	    else printf("%d\n",n%k);
	    q--;
	}
	return 0;
}

