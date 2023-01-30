#include <stdio.h>

int main(void) {
	int q;
	scanf("%d",&q);
	while (q>0)
	{
	    int u,v,a,s;
	    scanf("%d %d %d %d", &u, &v, &a, &s);
	    if (v==u) printf("YES\n");
	    else if ((v*v)>=(u*u)-(2*a*s)) printf("YES\n");
	    else printf("NO\n");
	    q--;
	}
	return 0;
}

