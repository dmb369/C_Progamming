#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while(q>0)
	{
	    int d,l,r;
	    scanf("%d %d %d", &d, &l, &r);
	    if (d>=l && r>=d) printf("Take second dose now\n");
	    else if (l<=d && l<=r) printf("Too Late\n");
	    else printf("Too Early\n");
	    q--;
	}
	return 0;
}

