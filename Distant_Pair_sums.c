#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while(q>0)
	{
	    int l,r;
	    scanf("%d %d", &l, &r);
	    if (l==r) printf("1\n");
	    else printf("%d\n",2*(r-l)+1);
	    q--;
	}
	return 0;
}

