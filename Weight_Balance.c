#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int w1,w2,x1,x2,m;
	    scanf("%d %d %d %d %d",&w1, &w2, &x1, &x2, &m);
	    int a=w2-w1;
	    int b=m*x1;
	    int c=m*x2;
	    if (a>=b && a<=c) printf("1\n");
	    else printf("0\n");
	    q--;
	}
	return 0;
}

