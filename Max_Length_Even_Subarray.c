#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int n;
	    scanf("%d",&n);
	    int a=n*(n+1)/2;
	    if (a%2==0) printf("%d\n",n);
	    else printf("%d\n",n-1);
	    q--;
	}
	return 0;
}

